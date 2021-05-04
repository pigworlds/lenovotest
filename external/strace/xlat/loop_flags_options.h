/* Generated by ./xlat/gen.sh from ./xlat/loop_flags_options.in; do not edit. */
#if !(defined(LO_FLAGS_READ_ONLY) || (defined(HAVE_DECL_LO_FLAGS_READ_ONLY) && HAVE_DECL_LO_FLAGS_READ_ONLY))
# define LO_FLAGS_READ_ONLY 1
#endif
#if !(defined(LO_FLAGS_USE_AOPS) || (defined(HAVE_DECL_LO_FLAGS_USE_AOPS) && HAVE_DECL_LO_FLAGS_USE_AOPS))
# define LO_FLAGS_USE_AOPS 2
#endif
#if !(defined(LO_FLAGS_AUTOCLEAR) || (defined(HAVE_DECL_LO_FLAGS_AUTOCLEAR) && HAVE_DECL_LO_FLAGS_AUTOCLEAR))
# define LO_FLAGS_AUTOCLEAR 4
#endif
#if !(defined(LO_FLAGS_PARTSCAN) || (defined(HAVE_DECL_LO_FLAGS_PARTSCAN) && HAVE_DECL_LO_FLAGS_PARTSCAN))
# define LO_FLAGS_PARTSCAN 8
#endif
#if !(defined(LO_FLAGS_DIRECT_IO) || (defined(HAVE_DECL_LO_FLAGS_DIRECT_IO) && HAVE_DECL_LO_FLAGS_DIRECT_IO))
# define LO_FLAGS_DIRECT_IO 16
#endif

#ifdef IN_MPERS

extern const struct xlat loop_flags_options[];

#else

# if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
# endif
const struct xlat loop_flags_options[] = {
 XLAT(LO_FLAGS_READ_ONLY),
/* Added in v2.6.11-732-gf3f28e4, Removed in v3.2-rc1~49^2~5^2~3 */
 XLAT(LO_FLAGS_USE_AOPS),
/* Added in v2.6.25-rc1~758 */
 XLAT(LO_FLAGS_AUTOCLEAR),
/* Added in v3.2-rc1~48^2~7 */
 XLAT(LO_FLAGS_PARTSCAN),
/* Added in v4.4-rc1~133^2~22 */
 XLAT(LO_FLAGS_DIRECT_IO),
 XLAT_END
};

#endif /* !IN_MPERS */
