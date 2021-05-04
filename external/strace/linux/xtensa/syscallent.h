[  0] = { 0,	0,		SEN(printargs),			"spill"			},
[  1] = { 0,	0,		SEN(printargs),			"xtensa"		},
[  2 ... 7] = { },
[  8] = { 3,	TD|TF,		SEN(open),			"open"			},
[  9] = { 1,	TD,		SEN(close),			"close"			},
[ 10] = { 1,	TD,		SEN(dup),			"dup"			},
[ 11] = { 2,	TD,		SEN(dup2),			"dup2"			},
[ 12] = { 3,	TD,		SEN(read),			"read"			},
[ 13] = { 3,	TD,		SEN(write),			"write"			},
[ 14] = { 5,	TD,		SEN(select),			"select"		},
[ 15] = { 3,	TD,		SEN(lseek),			"lseek"			},
[ 16] = { 3,	TD,		SEN(poll),			"poll"			},
[ 17] = { 5,	TD,		SEN(llseek),			"_llseek"		},
[ 18] = { 4,	TD,		SEN(epoll_wait),		"epoll_wait"		},
[ 19] = { 4,	TD,		SEN(epoll_ctl),			"epoll_ctl"		},
[ 20] = { 1,	TD,		SEN(epoll_create),		"epoll_create"		},
[ 21] = { 2,	TD|TF,		SEN(creat),			"creat"			},
[ 22] = { 2,	TF,		SEN(truncate),			"truncate"		},
[ 23] = { 2,	TD,		SEN(ftruncate),			"ftruncate"		},
[ 24] = { 3,	TD,		SEN(readv),			"readv"			},
[ 25] = { 3,	TD,		SEN(writev),			"writev"		},
[ 26] = { 1,	TD,		SEN(fsync),			"fsync"			},
[ 27] = { 1,	TD,		SEN(fdatasync),			"fdatasync"		},
[ 28] = { 4,	TF,		SEN(truncate64),		"truncate64"		},
[ 29] = { 4,	TD,		SEN(ftruncate64),		"ftruncate64"		},
[ 30] = { 6,	TD,		SEN(pread),			"pread64"		},
[ 31] = { 6,	TD,		SEN(pwrite),			"pwrite64"		},
[ 32] = { 2,	TF,		SEN(link),			"link"			},
[ 33] = { 2,	TF,		SEN(rename),			"rename"		},
[ 34] = { 2,	TF,		SEN(symlink),			"symlink"		},
[ 35] = { 3,	TF,		SEN(readlink),			"readlink"		},
[ 36] = { 3,	TF,		SEN(mknod),			"mknod"			},
[ 37] = { 1,	TD,		SEN(pipe),			"pipe"			},
[ 38] = { 1,	TF,		SEN(unlink),			"unlink"		},
[ 39] = { 1,	TF,		SEN(rmdir),			"rmdir"			},
[ 40] = { 2,	TF,		SEN(mkdir),			"mkdir"			},
[ 41] = { 1,	TF,		SEN(chdir),			"chdir"			},
[ 42] = { 1,	TD,		SEN(fchdir),			"fchdir"		},
[ 43] = { 2,	TF,		SEN(getcwd),			"getcwd"		},
[ 44] = { 2,	TF,		SEN(chmod),			"chmod"			},
[ 45] = { 3,	TF,		SEN(chown),			"chown"			},
[ 46] = { 2,	TF|TST|TSTA,	SEN(stat),			"stat"			},
[ 47] = { 2,	TF|TST|TSTA,	SEN(stat64),			"stat64"		},
[ 48] = { 3,	TF,		SEN(chown),			"lchown"		},
[ 49] = { 2,	TF|TLST|TSTA,	SEN(lstat),			"lstat"			},
[ 50] = { 2,	TF|TLST|TSTA,	SEN(lstat64),			"lstat64"		},
[ 51] = { },
[ 52] = { 2,	TD,		SEN(fchmod),			"fchmod"		},
[ 53] = { 3,	TD,		SEN(fchown),			"fchown"		},
[ 54] = { 2,	TD|TFST|TSTA,	SEN(fstat),			"fstat"			},
[ 55] = { 2,	TD|TFST|TSTA,	SEN(fstat64),			"fstat64"		},
[ 56] = { 2,	TD,		SEN(flock),			"flock"			},
[ 57] = { 2,	TF,		SEN(access),			"access"		},
[ 58] = { 1,	NF,		SEN(umask),			"umask"			},
[ 59] = { 3,	TD,		SEN(getdents),			"getdents"		},
[ 60] = { 3,	TD,		SEN(getdents64),		"getdents64"		},
[ 61] = { 3,	TD,		SEN(fcntl64),			"fcntl64"		},
[ 62] = { 6,	TD,		SEN(fallocate),			"fallocate"		},
[ 63] = { 6,	TD,		SEN(fadvise64_64),		"fadvise64_64"		},
[ 64] = { 2,	TF,		SEN(utime),			"utime"			},
[ 65] = { 2,	TF,		SEN(utimes),			"utimes"		},
[ 66] = { 3,	TD,		SEN(ioctl),			"ioctl"			},
[ 67] = { 3,	TD,		SEN(fcntl),			"fcntl"			},
[ 68] = { 5,	TF,		SEN(setxattr),			"setxattr"		},
[ 69] = { 4,	TF,		SEN(getxattr),			"getxattr"		},
[ 70] = { 3,	TF,		SEN(listxattr),			"listxattr"		},
[ 71] = { 2,	TF,		SEN(removexattr),		"removexattr"		},
[ 72] = { 5,	TF,		SEN(setxattr),			"lsetxattr"		},
[ 73] = { 4,	TF,		SEN(getxattr),			"lgetxattr"		},
[ 74] = { 3,	TF,		SEN(listxattr),			"llistxattr"		},
[ 75] = { 2,	TF,		SEN(removexattr),		"lremovexattr"		},
[ 76] = { 5,	TD,		SEN(fsetxattr),			"fsetxattr"		},
[ 77] = { 4,	TD,		SEN(fgetxattr),			"fgetxattr"		},
[ 78] = { 3,	TD,		SEN(flistxattr),		"flistxattr"		},
[ 79] = { 2,	TD,		SEN(fremovexattr),		"fremovexattr"		},
[ 80] = { 6,	TD|TM|SI,	SEN(mmap_pgoff),		"mmap2"			},
[ 81] = { 2,	TM|SI,		SEN(munmap),			"munmap"		},
[ 82] = { 3,	TM|SI,		SEN(mprotect),			"mprotect"		},
[ 83] = { 1,	TM|SI,		SEN(brk),			"brk"			},
[ 84] = { 2,	TM,		SEN(mlock),			"mlock"			},
[ 85] = { 2,	TM,		SEN(munlock),			"munlock"		},
[ 86] = { 1,	TM,		SEN(mlockall),			"mlockall"		},
[ 87] = { 0,	TM,		SEN(munlockall),		"munlockall"		},
[ 88] = { 5,	TM|SI,		SEN(mremap),			"mremap"		},
[ 89] = { 3,	TM,		SEN(msync),			"msync"			},
[ 90] = { 3,	TM,		SEN(mincore),			"mincore"		},
[ 91] = { 3,	TM,		SEN(madvise),			"madvise"		},
[ 92] = { 3,	TI,		SEN(shmget),			"shmget"		},
[ 93] = { 3,	TI|TM|SI,	SEN(shmat),			"shmat"			},
[ 94] = { 3,	TI,		SEN(shmctl),			"shmctl"		},
[ 95] = { 1,	TI|TM|SI,	SEN(shmdt),			"shmdt"			},
[ 96] = { 3,	TN,		SEN(socket),			"socket"		},
[ 97] = { 5,	TN,		SEN(setsockopt),		"setsockopt"		},
[ 98] = { 5,	TN,		SEN(getsockopt),		"getsockopt"		},
[ 99] = { 2,	TN,		SEN(shutdown),			"shutdown"		},
[100] = { 3,	TN,		SEN(bind),			"bind"			},
[101] = { 3,	TN,		SEN(connect),			"connect"		},
[102] = { 2,	TN,		SEN(listen),			"listen"		},
[103] = { 3,	TN,		SEN(accept),			"accept"		},
[104] = { 3,	TN,		SEN(getsockname),		"getsockname"		},
[105] = { 3,	TN,		SEN(getpeername),		"getpeername"		},
[106] = { 3,	TN,		SEN(sendmsg),			"sendmsg"		},
[107] = { 3,	TN,		SEN(recvmsg),			"recvmsg"		},
[108] = { 4,	TN,		SEN(send),			"send"			},
[109] = { 4,	TN,		SEN(recv),			"recv"			},
[110] = { 6,	TN,		SEN(sendto),			"sendto"		},
[111] = { 6,	TN,		SEN(recvfrom),			"recvfrom"		},
[112] = { 4,	TN,		SEN(socketpair),		"socketpair"		},
[113] = { 4,	TD|TN,		SEN(sendfile),			"sendfile"		},
[114] = { 4,	TD|TN,		SEN(sendfile64),		"sendfile64"		},
[115] = { 4,	TN,		SEN(sendmmsg),			"sendmmsg"		},
[116] = { 5,	TP,		SEN(clone),			"clone"			},
[117] = { 3,	TF|TP|SE|SI,	SEN(execve),			"execve"		},
[118] = { 1,	TP|SE,		SEN(exit),			"exit"			},
[119] = { 1,	TP|SE,		SEN(exit),			"exit_group"		},
[120] = { 0,	NF,		SEN(getpid),			"getpid"		},
[121] = { 4,	TP,		SEN(wait4),			"wait4"			},
[122] = { 5,	TP,		SEN(waitid),			"waitid"		},
[123] = { 2,	TS,		SEN(kill),			"kill"			},
[124] = { 2,	TS,		SEN(kill),			"tkill"			},
[125] = { 3,	TS,		SEN(tgkill),			"tgkill"		},
[126] = { 1,	0,		SEN(set_tid_address),		"set_tid_address"	},
[127] = { 0,	NF,		SEN(gettid),			"gettid"		},
[128] = { 0,	0,		SEN(setsid),			"setsid"		},
[129] = { 1,	0,		SEN(getsid),			"getsid"		},
[130] = { 5,	0,		SEN(prctl),			"prctl"			},
[131] = { 1,	NF,		SEN(personality),		"personality"		},
[132] = { 2,	0,		SEN(getpriority),		"getpriority"		},
[133] = { 3,	0,		SEN(setpriority),		"setpriority"		},
[134] = { 3,	0,		SEN(setitimer),			"setitimer"		},
[135] = { 2,	0,		SEN(getitimer),			"getitimer"		},
[136] = { 1,	0,		SEN(setuid),			"setuid"		},
[137] = { 0,	NF,		SEN(getuid),			"getuid"		},
[138] = { 1,	0,		SEN(setgid),			"setgid"		},
[139] = { 0,	NF,		SEN(getgid),			"getgid"		},
[140] = { 0,	NF,		SEN(geteuid),			"geteuid"		},
[141] = { 0,	NF,		SEN(getegid),			"getegid"		},
[142] = { 2,	0,		SEN(setreuid),			"setreuid"		},
[143] = { 2,	0,		SEN(setregid),			"setregid"		},
[144] = { 3,	0,		SEN(setresuid),			"setresuid"		},
[145] = { 3,	0,		SEN(getresuid),			"getresuid"		},
[146] = { 3,	0,		SEN(setresgid),			"setresgid"		},
[147] = { 3,	0,		SEN(getresgid),			"getresgid"		},
[148] = { 2,	0,		SEN(setpgid),			"setpgid"		},
[149] = { 1,	0,		SEN(getpgid),			"getpgid"		},
[150] = { 0,	NF,		SEN(getppid),			"getppid"		},
[151] = { 0,	0,		SEN(getpgrp),			"getpgrp"		},
[152 ... 153] = { },
[154] = { 1,	0,		SEN(times),			"times"			},
[155] = { 1,	TF,		SEN(acct),			"acct"			},
[156] = { 3,	0,		SEN(sched_setaffinity),		"sched_setaffinity"	},
[157] = { 3,	0,		SEN(sched_getaffinity),		"sched_getaffinity"	},
[158] = { 2,	0,		SEN(capget),			"capget"		},
[159] = { 2,	0,		SEN(capset),			"capset"		},
[160] = { 4,	0,		SEN(ptrace),			"ptrace"		},
[161] = { 4,	TI,		SEN(semtimedop),		"semtimedop"		},
[162] = { 3,	TI,		SEN(semget),			"semget"		},
[163] = { 3,	TI,		SEN(semop),			"semop"			},
[164] = { 4,	TI,		SEN(semctl),			"semctl"		},
[165] = { },
[166] = { 2,	TI,		SEN(msgget),			"msgget"		},
[167] = { 4,	TI,		SEN(msgsnd),			"msgsnd"		},
[168] = { 5,	TI,		SEN(msgrcv),			"msgrcv"		},
[169] = { 3,	TI,		SEN(msgctl),			"msgctl"		},
[170] = { },
[171] = { 2,	TF,		SEN(umount2),			"umount2"		},
[172] = { 5,	TF,		SEN(mount),			"mount"			},
[173] = { 2,	TF,		SEN(swapon),			"swapon"		},
[174] = { 1,	TF,		SEN(chroot),			"chroot"		},
[175] = { 2,	TF,		SEN(pivotroot),			"pivot_root"		},
[176] = { 1,	TF,		SEN(umount),			"umount"		},
[177] = { 1,	TF,		SEN(swapoff),			"swapoff"		},
[178] = { 0,	0,		SEN(sync),			"sync"			},
[179] = { 1,	TD,		SEN(syncfs),			"syncfs"		},
[180] = { 1,	NF,		SEN(setfsuid),			"setfsuid"		},
[181] = { 1,	NF,		SEN(setfsgid),			"setfsgid"		},
[182] = { 3,	0,		SEN(sysfs),			"sysfs"			},
[183] = { 2,	TSFA,		SEN(ustat),			"ustat"			},
[184] = { 2,	TF|TSF|TSFA,	SEN(statfs),			"statfs"		},
[185] = { 2,	TD|TFSF|TSFA,	SEN(fstatfs),			"fstatfs"		},
[186] = { 3,	TF|TSF|TSFA,	SEN(statfs64),			"statfs64"		},
[187] = { 3,	TD|TFSF|TSFA,	SEN(fstatfs64),			"fstatfs64"		},
[188] = { 2,	0,		SEN(setrlimit),			"setrlimit"		},
[189] = { 2,	0,		SEN(getrlimit),			"getrlimit"		},
[190] = { 2,	0,		SEN(getrusage),			"getrusage"		},
[191] = { 6,	0,		SEN(futex),			"futex"			},
[192] = { 2,	0,		SEN(gettimeofday),		"gettimeofday"		},
[193] = { 2,	0,		SEN(settimeofday),		"settimeofday"		},
[194] = { 1,	0,		SEN(adjtimex),			"adjtimex"		},
[195] = { 2,	0,		SEN(nanosleep),			"nanosleep"		},
[196] = { 2,	0,		SEN(getgroups),			"getgroups"		},
[197] = { 2,	0,		SEN(setgroups),			"setgroups"		},
[198] = { 2,	0,		SEN(sethostname),		"sethostname"		},
[199] = { 2,	0,		SEN(setdomainname),		"setdomainname"		},
[200] = { 3,	0,		SEN(syslog),			"syslog"		},
[201] = { 0,	0,		SEN(vhangup),			"vhangup"		},
[202] = { 1,	TF,		SEN(uselib),			"uselib"		},
[203] = { 4,	0,		SEN(reboot),			"reboot"		},
[204] = { 4,	TF,		SEN(quotactl),			"quotactl"		},
[205] = { 3,	0,		SEN(nfsservctl),		"nfsservctl"		},
[206] = { 1,	0,		SEN(sysctl),			"_sysctl"		},
[207] = { 2,	0,		SEN(bdflush),			"bdflush"		},
[208] = { 1,	0,		SEN(uname),			"uname"			},
[209] = { 1,	0,		SEN(sysinfo),			"sysinfo"		},
[210] = { 3,	0,		SEN(init_module),		"init_module"		},
[211] = { 2,	0,		SEN(delete_module),		"delete_module"		},
[212] = { 2,	0,		SEN(sched_setparam),		"sched_setparam"	},
[213] = { 2,	0,		SEN(sched_getparam),		"sched_getparam"	},
[214] = { 3,	0,		SEN(sched_setscheduler),	"sched_setscheduler"	},
[215] = { 1,	0,		SEN(sched_getscheduler),	"sched_getscheduler"	},
[216] = { 1,	0,		SEN(sched_get_priority_max),	"sched_get_priority_max"},
[217] = { 1,	0,		SEN(sched_get_priority_min),	"sched_get_priority_min"},
[218] = { 2,	0,		SEN(sched_rr_get_interval),	"sched_rr_get_interval"	},
[219] = { 0,	0,		SEN(sched_yield),		"sched_yield"		},
[220 ... 222] = { },
[223] = { 0,	0,		SEN(restart_syscall),		"restart_syscall"	},
[224] = { 2,	TS,		SEN(sigaltstack),		"sigaltstack"		},
[225] = { 0,	TS,		SEN(rt_sigreturn),		"rt_sigreturn"		},
[226] = { 4,	TS,		SEN(rt_sigaction),		"rt_sigaction"		},
[227] = { 4,	TS,		SEN(rt_sigprocmask),		"rt_sigprocmask"	},
[228] = { 2,	TS,		SEN(rt_sigpending),		"rt_sigpending"		},
[229] = { 4,	TS,		SEN(rt_sigtimedwait),		"rt_sigtimedwait"	},
[230] = { 3,	TS,		SEN(rt_sigqueueinfo),		"rt_sigqueueinfo"	},
[231] = { 2,	TS,		SEN(rt_sigsuspend),		"rt_sigsuspend"		},
[232] = { 4,	0,		SEN(mq_open),			"mq_open"		},
[233] = { 1,	0,		SEN(mq_unlink),			"mq_unlink"		},
[234] = { 5,	0,		SEN(mq_timedsend),		"mq_timedsend"		},
[235] = { 5,	0,		SEN(mq_timedreceive),		"mq_timedreceive"	},
[236] = { 2,	0,		SEN(mq_notify),			"mq_notify"		},
[237] = { 3,	0,		SEN(mq_getsetattr),		"mq_getsetattr"		},
[238] = { },
[239] = { 2,	TM,		SEN(io_setup),			"io_setup"		},
[240] = { 1,	TM,		SEN(io_destroy),		"io_destroy"		},
[241] = { 3,	0,		SEN(io_submit),			"io_submit"		},
[242] = { 5,	0,		SEN(io_getevents),		"io_getevents"		},
[243] = { 3,	0,		SEN(io_cancel),			"io_cancel"		},
[244] = { 2,	0,		SEN(clock_settime),		"clock_settime"		},
[245] = { 2,	0,		SEN(clock_gettime),		"clock_gettime"		},
[246] = { 2,	0,		SEN(clock_getres),		"clock_getres"		},
[247] = { 4,	0,		SEN(clock_nanosleep),		"clock_nanosleep"	},
[248] = { 3,	0,		SEN(timer_create),		"timer_create"		},
[249] = { 1,	0,		SEN(timer_delete),		"timer_delete"		},
[250] = { 4,	0,		SEN(timer_settime),		"timer_settime"		},
[251] = { 2,	0,		SEN(timer_gettime),		"timer_gettime"		},
[252] = { 1,	0,		SEN(timer_getoverrun),		"timer_getoverrun"	},
[253] = { },
[254] = { 4,	0,		SEN(lookup_dcookie),		"lookup_dcookie"	},
[255] = { },
[256] = { 5,	0,		SEN(add_key),			"add_key"		},
[257] = { 4,	0,		SEN(request_key),		"request_key"		},
[258] = { 5,	0,		SEN(keyctl),			"keyctl"		},
[259] = { },
[260] = { 5,	TD,		SEN(readahead),			"readahead"		},
[261] = { 5,	TM|SI,		SEN(remap_file_pages),		"remap_file_pages"	},
[262] = { 4,	TM,		SEN(migrate_pages),		"migrate_pages"		},
[263] = { 6,	TM,		SEN(mbind),			"mbind"			},
[264] = { 5,	TM,		SEN(get_mempolicy),		"get_mempolicy"		},
[265] = { 3,	TM,		SEN(set_mempolicy),		"set_mempolicy"		},
[266] = { 1,	TP,		SEN(unshare),			"unshare"		},
[267] = { 6,	TM,		SEN(move_pages),		"move_pages"		},
[268] = { 6,	TD,		SEN(splice),			"splice"		},
[269] = { 4,	TD,		SEN(tee),			"tee"			},
[270] = { 4,	TD,		SEN(vmsplice),			"vmsplice"		},
[271] = { },
[272] = { 6,	TD,		SEN(pselect6),			"pselect6"		},
[273] = { 5,	TD,		SEN(ppoll),			"ppoll"			},
[274] = { 6,	TD,		SEN(epoll_pwait),		"epoll_pwait"		},
[275] = { 1,	TD,		SEN(epoll_create1),		"epoll_create1"		},
[276] = { 0,	TD,		SEN(inotify_init),		"inotify_init"		},
[277] = { 3,	TD,		SEN(inotify_add_watch),		"inotify_add_watch"	},
[278] = { 2,	TD,		SEN(inotify_rm_watch),		"inotify_rm_watch"	},
[279] = { 1,	TD,		SEN(inotify_init1),		"inotify_init1"		},
[280] = { 3,	0,		SEN(getcpu),			"getcpu"		},
[281] = { 4,	0,		SEN(kexec_load),		"kexec_load"		},
[282] = { 3,	0,		SEN(ioprio_set),		"ioprio_set"		},
[283] = { 2,	0,		SEN(ioprio_get),		"ioprio_get"		},
[284] = { 2,	0,		SEN(set_robust_list),		"set_robust_list"	},
[285] = { 3,	0,		SEN(get_robust_list),		"get_robust_list"	},
[286 ... 287] = { },
[288] = { 4,	TD|TF,		SEN(openat),			"openat"		},
[289] = { 3,	TD|TF,		SEN(mkdirat),			"mkdirat"		},
[290] = { 4,	TD|TF,		SEN(mknodat),			"mknodat"		},
[291] = { 3,	TD|TF,		SEN(unlinkat),			"unlinkat"		},
[292] = { 4,	TD|TF,		SEN(renameat),			"renameat"		},
[293] = { 5,	TD|TF,		SEN(linkat),			"linkat"		},
[294] = { 3,	TD|TF,		SEN(symlinkat),			"symlinkat"		},
[295] = { 4,	TD|TF,		SEN(readlinkat),		"readlinkat"		},
[296] = { 4,	TD|TF,		SEN(utimensat),			"utimensat"		},
[297] = { 5,	TD|TF,		SEN(fchownat),			"fchownat"		},
[298] = { 3,	TD|TF,		SEN(futimesat),			"futimesat"		},
[299] = { 4,	TD|TF|TFST|TSTA,SEN(fstatat64),			"fstatat64"		},
[300] = { 3,	TD|TF,		SEN(fchmodat),			"fchmodat"		},
[301] = { 3,	TD|TF,		SEN(faccessat),			"faccessat"		},
[302 ... 303] = { },
[304] = { 3,	TD|TS,		SEN(signalfd),			"signalfd"		},
[305] = { },
[306] = { 1,	TD,		SEN(eventfd),			"eventfd"		},
[307] = { 5,	TN,		SEN(recvmmsg),			"recvmmsg"		},
[308] = { 2,	TD,		SEN(setns),			"setns"			},
[309] = { 4,	TD|TS,		SEN(signalfd4),			"signalfd4"		},
[310] = { 3,	TD,		SEN(dup3),			"dup3"			},
[311] = { 2,	TD,		SEN(pipe2),			"pipe2"			},
[312] = { 2,	TD,		SEN(timerfd_create),		"timerfd_create"	},
[313] = { 4,	TD,		SEN(timerfd_settime),		"timerfd_settime"	},
[314] = { 2,	TD,		SEN(timerfd_gettime),		"timerfd_gettime"	},
[315] = { },
[316] = { 2,	TD,		SEN(eventfd2),			"eventfd2"		},
[317] = { 5,	TD,		SEN(preadv),			"preadv"		},
[318] = { 5,	TD,		SEN(pwritev),			"pwritev"		},
[319] = { },
[320] = { 2,	TD,		SEN(fanotify_init),		"fanotify_init"		},
[321] = { 6,	TD|TF,		SEN(fanotify_mark),		"fanotify_mark"		},
[322] = { 6,	0,		SEN(process_vm_readv),		"process_vm_readv"	},
[323] = { 6,	0,		SEN(process_vm_writev),		"process_vm_writev"	},
[324] = { 5,	TD|TF,		SEN(name_to_handle_at),		"name_to_handle_at"	},
[325] = { 3,	TD,		SEN(open_by_handle_at),		"open_by_handle_at"	},
[326] = { 6,	TD,		SEN(sync_file_range2),		"sync_file_range2"	},
[327] = { 5,	TD,		SEN(perf_event_open),		"perf_event_open"	},
[328] = { 4,	TP|TS,		SEN(rt_tgsigqueueinfo),		"rt_tgsigqueueinfo"	},
[329] = { 2,	0,		SEN(clock_adjtime),		"clock_adjtime"		},
[330] = { 4,	0,		SEN(prlimit64),			"prlimit64"		},
[331] = { 5,	0,		SEN(kcmp),			"kcmp"			},
[332] = { 3,	TD,		SEN(finit_module),		"finit_module"		},
[333] = { 4,	TN,		SEN(accept4),			"accept4"		},
[334] = { 3,	0,		SEN(sched_setattr),		"sched_setattr"		},
[335] = { 4,	0,		SEN(sched_getattr),		"sched_getattr"		},
[336] = { 5,	TD|TF,		SEN(renameat2),			"renameat2"		},
[337] = { 3,	0,		SEN(seccomp),			"seccomp"		},
[338] = { 3,	0,		SEN(getrandom),			"getrandom"		},
[339] = { 2,	TD,		SEN(memfd_create),		"memfd_create"		},
[340] = { 3,	TD,		SEN(bpf),			"bpf"			},
[341] = { 5,	TD|TF|TP|SE|SI,	SEN(execveat),			"execveat"		},
[342] = { 1,	TD,		SEN(userfaultfd),		"userfaultfd"		},
[343] = { 2,	0,		SEN(membarrier),		"membarrier"		},
[344] = { 3,	TM,		SEN(mlock2),			"mlock2"		},
[345] = { 6,	TD,		SEN(copy_file_range),		"copy_file_range"	},
[346] = { 6,	TD,		SEN(preadv2),			"preadv2"		},
[347] = { 6,	TD,		SEN(pwritev2),			"pwritev2"		},
[348] = { 4,	TM|SI,		SEN(pkey_mprotect),		"pkey_mprotect"		},
[249] = { 2,	0,		SEN(pkey_alloc),		"pkey_alloc"		},
[350] = { 1,	0,		SEN(pkey_free),			"pkey_free"		},
[351] = { 5,	TD|TF|TSTA,	SEN(statx),			"statx"			},
