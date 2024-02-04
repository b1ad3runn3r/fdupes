/* number of bytes to read per read call */
#define CHUNK_SIZE 8192

/* default subdirectory for fdupes config files */
#define FDUPES_CACHE_DIRECTORY "fdupes"

/* directory permissions for fdupes config directory */
#define FDUPES_CACHE_DIRECTORY_PERMISSIONS 0700

/* filename for fdupes hash database */
#define FDUPES_HASH_DATABASE_NAME "hash.db"

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <ncursesw/curses.h> header file. */
/* #undef HAVE_NCURSESW_CURSES_H */

/* stat supports nanosecond precision */
#define HAVE_NSEC_TIMES 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* fdupes help file */
#define HELP_COMMAND_STRING "man 7 fdupes-help"

/* size of command buffer (plain interactive mode only) */
#define INPUT_SIZE 256

/* Do not compile against ncurses */
/* #undef NO_NCURSES */

/* Do not compile against sqlite */
/* #undef NO_SQLITE */

/* Name of package */
#define PACKAGE "fdupes"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "fdupes"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "fdupes 2.3.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "fdupes"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.3.0"

/* maximum number of bytes to use when calculating partial hashes */
#define PARTIAL_MD5_SIZE 4096

/* PCRE2 Code Unit Width */
#define PCRE2_CODE_UNIT_WIDTH 32

/* Define to 1 if all of the C89 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "2.3.0"

/* allow fdupes to handle files greater than (2<<31)-1 bytes */
#define _FILE_OFFSET_BITS 64

/* enable strtoll */
#define _ISOC99_SOURCE /**/

/* enable certain X/Open and POSIX features */
#define _XOPEN_SOURCE 700

/* enable certain functions in curses.h */
#define _XOPEN_SOURCE_EXTENDED /**/
