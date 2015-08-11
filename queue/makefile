CC=gcc
CFLAGS=-Wall -g
DEPS=struct.h
OBJ=main.o operations.o

%.o:%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
queue: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
