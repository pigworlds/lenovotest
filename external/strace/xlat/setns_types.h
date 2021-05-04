/* Generated by ./xlat/gen.sh from ./xlat/setns_types.in; do not edit. */
#if !(defined(CLONE_NEWNS) || (defined(HAVE_DECL_CLONE_NEWNS) && HAVE_DECL_CLONE_NEWNS))
# define CLONE_NEWNS 0x00020000
#endif
#if !(defined(CLONE_NEWCGROUP) || (defined(HAVE_DECL_CLONE_NEWCGROUP) && HAVE_DECL_CLONE_NEWCGROUP))
# define CLONE_NEWCGROUP 0x02000000
#endif
#if !(defined(CLONE_NEWUTS) || (defined(HAVE_DECL_CLONE_NEWUTS) && HAVE_DECL_CLONE_NEWUTS))
# define CLONE_NEWUTS 0x04000000
#endif
#if !(defined(CLONE_NEWIPC) || (defined(HAVE_DECL_CLONE_NEWIPC) && HAVE_DECL_CLONE_NEWIPC))
# define CLONE_NEWIPC 0x08000000
#endif
#if !(defined(CLONE_NEWUSER) || (defined(HAVE_DECL_CLONE_NEWUSER) && HAVE_DECL_CLONE_NEWUSER))
# define CLONE_NEWUSER 0x10000000
#endif
#if !(defined(CLONE_NEWPID) || (defined(HAVE_DECL_CLONE_NEWPID) && HAVE_DECL_CLONE_NEWPID))
# define CLONE_NEWPID 0x20000000
#endif
#if !(defined(CLONE_NEWNET) || (defined(HAVE_DECL_CLONE_NEWNET) && HAVE_DECL_CLONE_NEWNET))
# define CLONE_NEWNET 0x40000000
#endif

#ifndef IN_MPERS

const struct xlat setns_types[] = {
 XLAT(0),
 XLAT(CLONE_NEWNS),
 XLAT(CLONE_NEWCGROUP),
 XLAT(CLONE_NEWUTS),
 XLAT(CLONE_NEWIPC),
 XLAT(CLONE_NEWUSER),
 XLAT(CLONE_NEWPID),
 XLAT(CLONE_NEWNET),
 XLAT_END
};

#endif /* !IN_MPERS */
