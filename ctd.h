#ifndef ctd_h
#define ctd_h

#define CTD_VERSION 1.00
#define CTD_DEFAULT "-"
#define CTD_KEYS 64
#define CTD_VALUES CTD_KEYS
#define CTD_BUFFER 256

struct meta_t
{
  char copyrighted[CTD_BUFFER];
  char author[CTD_BUFFER];
  float version;
};

struct ctd_t
{
  signed int id;
  struct meta_t meta;
  char keys[CTD_KEYS][CTD_BUFFER];
  char values[CTD_VALUES][CTD_BUFFER];
};

int ctd_read(char *filename, struct ctd_t *data);
int ctd_write(char *filename, struct ctd_t *data);
int ctd_meta(struct ctd_t *data);

#endif
