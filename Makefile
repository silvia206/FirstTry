CFLAGS = -Wall -g

clean:
	rm -f ex1
ex1: 
	$(CC) $(CFLAGS) ex1.c -o ex1

all: ex1
