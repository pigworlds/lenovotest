/* Generated by ./xlat/gen.sh from ./xlat/archvals.in; do not edit. */
#if !(defined(ARCH_GET_CPUID) || (defined(HAVE_DECL_ARCH_GET_CPUID) && HAVE_DECL_ARCH_GET_CPUID))
# define ARCH_GET_CPUID 0x1011
#endif
#if !(defined(ARCH_SET_CPUID) || (defined(HAVE_DECL_ARCH_SET_CPUID) && HAVE_DECL_ARCH_SET_CPUID))
# define ARCH_SET_CPUID 0x1012
#endif
#if !(defined(ARCH_MAP_VDSO_X32) || (defined(HAVE_DECL_ARCH_MAP_VDSO_X32) && HAVE_DECL_ARCH_MAP_VDSO_X32))
# define ARCH_MAP_VDSO_X32 0x2001
#endif
#if !(defined(ARCH_MAP_VDSO_32) || (defined(HAVE_DECL_ARCH_MAP_VDSO_32) && HAVE_DECL_ARCH_MAP_VDSO_32))
# define ARCH_MAP_VDSO_32 0x2002
#endif
#if !(defined(ARCH_MAP_VDSO_64) || (defined(HAVE_DECL_ARCH_MAP_VDSO_64) && HAVE_DECL_ARCH_MAP_VDSO_64))
# define ARCH_MAP_VDSO_64 0x2003
#endif

#ifdef IN_MPERS

# error static const struct xlat archvals in mpers mode

#else

static
const struct xlat archvals[] = {
#if defined(ARCH_SET_GS) || (defined(HAVE_DECL_ARCH_SET_GS) && HAVE_DECL_ARCH_SET_GS)
  XLAT(ARCH_SET_GS),
#endif
#if defined(ARCH_SET_FS) || (defined(HAVE_DECL_ARCH_SET_FS) && HAVE_DECL_ARCH_SET_FS)
  XLAT(ARCH_SET_FS),
#endif
#if defined(ARCH_GET_FS) || (defined(HAVE_DECL_ARCH_GET_FS) && HAVE_DECL_ARCH_GET_FS)
  XLAT(ARCH_GET_FS),
#endif
#if defined(ARCH_GET_GS) || (defined(HAVE_DECL_ARCH_GET_GS) && HAVE_DECL_ARCH_GET_GS)
  XLAT(ARCH_GET_GS),
#endif
 XLAT(ARCH_GET_CPUID),
 XLAT(ARCH_SET_CPUID),
 XLAT(ARCH_MAP_VDSO_X32),
 XLAT(ARCH_MAP_VDSO_32),
 XLAT(ARCH_MAP_VDSO_64),
 XLAT_END
};

#endif /* !IN_MPERS */
