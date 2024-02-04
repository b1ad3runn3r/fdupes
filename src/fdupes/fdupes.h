#ifndef FDUPES_H
#define FDUPES_H

#include "../config.h"
#include <sys/stat.h>
#include "md5/md5.h"

typedef struct _file {
  char *d_name;
  off_t size;
  md5_byte_t *crcpartial;
  md5_byte_t *crcsignature;
  dev_t device;
  ino_t inode;
  time_t mtime;
  time_t ctime;
  long mtime_nsec;
  long ctime_nsec;
  int hasdupes; /* true only if file is first on duplicate chain */
  struct _file *duplicates;
  struct _file *next;
} file_t;

#endif