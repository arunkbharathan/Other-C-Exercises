CC=gcc
CFLAGS=-Wall -g

calculate: macro.c
	$(CC) $(CFLAGS) -o macro.o macro.c   
