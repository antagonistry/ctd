#ifndef ctd_h
#define ctd_h

#define CTD_KEYS 64
#define CTD_VALUES CTD_KEYS
#define CTD_BUFFER 256

struct ctd
{
  char keys[CTD_KEYS][CTD_BUFFER];
  char values[CTD_VALUES][CTD_BUFFER];
};

int ctd_read(char *filename, struct ctd* data);
int ctd_write(char *filename, struct ctd* data);

#endif
