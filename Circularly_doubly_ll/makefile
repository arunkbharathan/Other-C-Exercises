CC=gcc
CFLAGS=-Wall -g 
DEPS=headers.h
OBJ= main.o toScreen.o operations.o

%.o:%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
CDLL: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
	
clean:
	rm -f *.o *~ 
