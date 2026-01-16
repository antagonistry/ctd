CC=gcc
RM=rm -rf
CFLAGS=-shared -static
SOURCE=ctd.c
OUTPUT=bin/ctd.so

.PHONY: install clean

all: install clean

install: clean
	$(CC) $(CFLAGS) $(SOURCE) -o $(OUTPUT)

clean:
	$(RM) $(OUTPUT)
