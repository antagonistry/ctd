# CTD

CTD is a 'compiled table of datas' for the language C.
It is used for read and writing datas to a file from
a struct based on ctd's `ctd_t`. It also come with 2
functions that you can used to read and write,
`ctd_read` and `ctd_write`, and another function use
to write meta for the struct `ctd_t`, which is
`ctd_meta`. This library is written in 32 bit.

```c
int ctd_read(char *filename, struct ctd_t *data);
int ctd_write(char *filename, struct ctd_t *data);
int ctd_meta(struct ctd_t *data);
```

## Compilation Steps

If you wish to not use the pre-built version of CTD,
you can compile yourself with `make` in the terminal.

## Support

Thanks for reading/using the CTD, unfortunately, this
project is already finished and would not be continued
, because it is already in a perfect state.
