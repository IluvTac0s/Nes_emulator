CC=gcc
CFLAGS=-O2 -Wall -Wextra -std=c11

SRCDIR=src
TARGET=nesemu

all: $(TARGET)

$(TARGET): $(SRCDIR)/main.c
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCDIR)/main.c

clean:
	rm -f $(TARGET)
