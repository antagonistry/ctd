#define ctd_c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ctd.h"

int ctd_read(char *filename, struct ctd_t *data)
{
  if (!data) return EXIT_FAILURE;

  FILE *stream = fopen(filename, "rb");
  
  if (!stream) return EXIT_FAILURE;
  
  fread(data, sizeof(*data), 1, stream);
  fclose(stream);
  return EXIT_SUCCESS;
}

int ctd_write(char *filename, struct ctd_t *data)
{
  if (!data) return EXIT_FAILURE;

  FILE *stream = fopen(filename, "wb");

  if (!stream) return EXIT_FAILURE;

  fwrite(data, sizeof(*data), 1, stream);
  fclose(stream);
  return EXIT_SUCCESS;
}

int ctd_meta(struct ctd_t *data)
{
  if (!data) return EXIT_FAILURE;

  strcpy(data->meta.copyrighted, CTD_DEFAULT);
  strcpy(data->meta.author, CTD_DEFAULT);
  data->meta.version = CTD_VERSION;
  return EXIT_SUCCESS;
}
