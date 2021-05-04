/*
* Copyright (c) 2017-2018, The Linux Foundation. All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are
* met:
* 	* Redistributions of source code must retain the above copyright
* 	  notice, this list of conditions and the following disclaimer.
* 	* Redistributions in binary form must reproduce the above
* 	  copyright notice, this list of conditions and the following
* 	  disclaimer in the documentation and/or other materials provided
* 	  with the distribution.
* 	* Neither the name of The Linux Foundation nor the names of its
* 	  contributors may be used to endorse or promote products derived
* 	  from this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
* ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
* BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
* BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
* WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
* OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
* IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef _LIBDRM_API_FE_H_
#define _LIBDRM_API_FE_H_

#include <stdio.h>
#include <dlfcn.h>

struct drm_interface_fe {
	int (*drmioctl_fe)(int fd, unsigned long request, void *arg);
	int (*drmclose_fe)(int fd);
	int (*drmopen_fe)(int minor, int type);
};

void * load_drm_fe_module(const char *path, const char *entrypoint)
{
	void *module, *interface;

	module = dlopen(path, RTLD_NOW);
	if (!module) {
		return NULL;
	}

	interface = dlsym(module, entrypoint);
	if (!interface) {
		dlclose(module);
		return NULL;
	}

	return interface;
}

struct drm_interface_fe * get_drm_fe(void)
{
	static struct drm_interface_fe *drm_interface_fe = NULL;
	static int drm_fe_init = 0;

	if (!drm_fe_init) {
		drm_interface_fe =
			load_drm_fe_module(
				LIBDIR"/lib_drm_fe.so",
				"drm_interface_fe");
		drm_fe_init = 1;
	}

	return drm_interface_fe;
}

/* overwrite the default ioctl function */
#define open(path_, ...) (\
{\
	struct drm_interface_fe * drm_fe = get_drm_fe();\
	int fd_ = -1;\
	if (drm_fe != NULL)\
		fd_ = drm_fe->drmopen_fe(0,0);\
	if (fd_ < 0)\
		fd_ = open(path_, __VA_ARGS__);\
	fd_;\
})
#define ioctl(fd_, req_, arg_) (\
{\
	struct drm_interface_fe * drm_fe = get_drm_fe();\
	int ret_;\
	if (drm_fe != NULL)\
		ret_ = drm_fe->drmioctl_fe(fd_, req_, arg_);\
	else\
		ret_ = ioctl(fd_, req_, arg_);\
	ret_;\
})
#define close(fd_) (\
{\
	struct drm_interface_fe * drm_fe = get_drm_fe();\
	int ret_;\
	if (drm_fe != NULL)\
		ret_ = drm_fe->drmclose_fe(fd_);\
	else\
		ret_ = close(fd_);\
	ret_;\
})
#define stat(path, ...) (\
{\
	struct drm_interface_fe * drm_fe = get_drm_fe();\
	int ret_;\
	if (drm_fe != NULL)\
		ret_ = 0;\
	else\
		ret_ = stat(path, __VA_ARGS__);\
	ret_;\
})

#endif

