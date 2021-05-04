/* Generated by ./xlat/gen.sh from ./xlat/fiemap_extent_flags.in; do not edit. */
#if !(defined(FIEMAP_EXTENT_LAST) || (defined(HAVE_DECL_FIEMAP_EXTENT_LAST) && HAVE_DECL_FIEMAP_EXTENT_LAST))
# define FIEMAP_EXTENT_LAST 0x00000001
#endif
#if !(defined(FIEMAP_EXTENT_UNKNOWN) || (defined(HAVE_DECL_FIEMAP_EXTENT_UNKNOWN) && HAVE_DECL_FIEMAP_EXTENT_UNKNOWN))
# define FIEMAP_EXTENT_UNKNOWN 0x00000002
#endif
#if !(defined(FIEMAP_EXTENT_DELALLOC) || (defined(HAVE_DECL_FIEMAP_EXTENT_DELALLOC) && HAVE_DECL_FIEMAP_EXTENT_DELALLOC))
# define FIEMAP_EXTENT_DELALLOC 0x00000004
#endif
#if !(defined(FIEMAP_EXTENT_ENCODED) || (defined(HAVE_DECL_FIEMAP_EXTENT_ENCODED) && HAVE_DECL_FIEMAP_EXTENT_ENCODED))
# define FIEMAP_EXTENT_ENCODED 0x00000008
#endif
#if !(defined(FIEMAP_EXTENT_DATA_ENCRYPTED) || (defined(HAVE_DECL_FIEMAP_EXTENT_DATA_ENCRYPTED) && HAVE_DECL_FIEMAP_EXTENT_DATA_ENCRYPTED))
# define FIEMAP_EXTENT_DATA_ENCRYPTED 0x00000080
#endif
#if !(defined(FIEMAP_EXTENT_NOT_ALIGNED) || (defined(HAVE_DECL_FIEMAP_EXTENT_NOT_ALIGNED) && HAVE_DECL_FIEMAP_EXTENT_NOT_ALIGNED))
# define FIEMAP_EXTENT_NOT_ALIGNED 0x00000100
#endif
#if !(defined(FIEMAP_EXTENT_DATA_INLINE) || (defined(HAVE_DECL_FIEMAP_EXTENT_DATA_INLINE) && HAVE_DECL_FIEMAP_EXTENT_DATA_INLINE))
# define FIEMAP_EXTENT_DATA_INLINE 0x00000200
#endif
#if !(defined(FIEMAP_EXTENT_DATA_TAIL) || (defined(HAVE_DECL_FIEMAP_EXTENT_DATA_TAIL) && HAVE_DECL_FIEMAP_EXTENT_DATA_TAIL))
# define FIEMAP_EXTENT_DATA_TAIL 0x00000400
#endif
#if !(defined(FIEMAP_EXTENT_UNWRITTEN) || (defined(HAVE_DECL_FIEMAP_EXTENT_UNWRITTEN) && HAVE_DECL_FIEMAP_EXTENT_UNWRITTEN))
# define FIEMAP_EXTENT_UNWRITTEN 0x00000800
#endif
#if !(defined(FIEMAP_EXTENT_MERGED) || (defined(HAVE_DECL_FIEMAP_EXTENT_MERGED) && HAVE_DECL_FIEMAP_EXTENT_MERGED))
# define FIEMAP_EXTENT_MERGED 0x00001000
#endif
#if !(defined(FIEMAP_EXTENT_SHARED) || (defined(HAVE_DECL_FIEMAP_EXTENT_SHARED) && HAVE_DECL_FIEMAP_EXTENT_SHARED))
# define FIEMAP_EXTENT_SHARED 0x00002000
#endif

#ifdef IN_MPERS

# error static const struct xlat fiemap_extent_flags in mpers mode

#else

static
const struct xlat fiemap_extent_flags[] = {
 XLAT(FIEMAP_EXTENT_LAST),
 XLAT(FIEMAP_EXTENT_UNKNOWN),
 XLAT(FIEMAP_EXTENT_DELALLOC),
 XLAT(FIEMAP_EXTENT_ENCODED),
 XLAT(FIEMAP_EXTENT_DATA_ENCRYPTED),
 XLAT(FIEMAP_EXTENT_NOT_ALIGNED),
 XLAT(FIEMAP_EXTENT_DATA_INLINE),
 XLAT(FIEMAP_EXTENT_DATA_TAIL),
 XLAT(FIEMAP_EXTENT_UNWRITTEN),
 XLAT(FIEMAP_EXTENT_MERGED),
 XLAT(FIEMAP_EXTENT_SHARED),
 XLAT_END
};

#endif /* !IN_MPERS */
