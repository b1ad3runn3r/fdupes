#include "../config.h"
#include "sigint.h"
#include "confirmmatch.h"
#include <stdlib.h>
#include <memory.h>

/* Do a bit-for-bit comparison in case two different files produce the
   same signature. Unlikely, but better safe than sorry. */

int confirmmatch(FILE *file1, FILE *file2)
{
  unsigned char c1[CHUNK_SIZE];
  unsigned char c2[CHUNK_SIZE];
  size_t r1;
  size_t r2;

  fseek(file1, 0, SEEK_SET);
  fseek(file2, 0, SEEK_SET);

  do {
    if (got_sigint) {
      fclose(file1);
      fclose(file2);
      exit(0);
    }

    r1 = fread(c1, sizeof(unsigned char), sizeof(c1), file1);
    r2 = fread(c2, sizeof(unsigned char), sizeof(c2), file2);

    if (r1 != r2) return 0; /* file lengths are different */
    if (memcmp (c1, c2, r1)) return 0; /* file contents are different */
  } while (r2);

  return 1;
}
