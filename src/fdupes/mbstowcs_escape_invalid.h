#ifndef MBSTOWCS_ESCAPE_INVALID_H
#define MBSTOWCS_ESCAPE_INVALID_H

#include <wchar.h>

size_t mbstowcs_escape_invalid(wchar_t *dest, const char *src, size_t n);

#endif