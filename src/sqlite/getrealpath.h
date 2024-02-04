#ifndef GETREALPATH_H
#define GETREALPATH_H

#define GETREALPATH_NONE                    0b0
#define GETREALPATH_IGNORE_MISSING_BASENAME 0b1

char *getrealpath(const char *path, unsigned int options);

#endif