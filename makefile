# File: Makefile
# Author: Jon Sulcer
# Makefile for the Hello World program

# Compiler Version
CC=g++

# Target
TARGET=hello

# Compile with all errors and warnings
CFLAGS=-c -Wall -g

all: $(TARGET)

$(TARGET): main.o
	$(CC) main.o -o $(TARGET)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm *.o *~ $(TARGET)
