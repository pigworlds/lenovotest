/* Generated by ./xlat/gen.sh from ./xlat/personality_types.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat personality_types in mpers mode

#else

static
const struct xlat personality_types[] = {
 XLAT(PER_LINUX),
 XLAT(PER_LINUX_32BIT),
 XLAT(PER_LINUX_FDPIC),
 XLAT(PER_SVR4),
 XLAT(PER_SVR3),
 XLAT(PER_SCOSVR3),
 XLAT(PER_OSR5),
 XLAT(PER_WYSEV386),
 XLAT(PER_ISCR4),
 XLAT(PER_BSD),
 XLAT(PER_SUNOS),
 XLAT(PER_XENIX),
 XLAT(PER_LINUX32),
 XLAT(PER_LINUX32_3GB),
 XLAT(PER_IRIX32),
 XLAT(PER_IRIXN32),
 XLAT(PER_IRIX64),
 XLAT(PER_RISCOS),
 XLAT(PER_SOLARIS),
 XLAT(PER_UW7),
 XLAT(PER_OSF4),
 XLAT(PER_HPUX),
 XLAT_END
};

#endif /* !IN_MPERS */
