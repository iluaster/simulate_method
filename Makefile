all: main

CC=gcc
CFLAGS= -std=c99 -g 
shellcode: main.o
		$(CC) $(CFLAGS) -o main main.o
shellcode.o:main.c
		$(CC) $(CFLAGS) -c main.c
			
clean:
		rm -f main.o
