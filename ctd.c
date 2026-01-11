#define ctd_c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ctd.h"

int ctd_read(char *filename, struct ctd *data)
{
  FILE *stream = fopen(filename, "rb");
  
  if (!stream) return EXIT_FAILURE;
  
  fread(data, sizeof(*data), 1, stream);
  fclose(stream);
}

int ctd_write(char *filename, struct ctd *data)
{
  FILE *stream = fopen(filename, "wb");

  if (!stream) return EXIT_FAILURE;

  fwrite(data, sizeof(*data), 1, stream);
  fclose(stream);
}
