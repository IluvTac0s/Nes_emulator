CC=gcc
CFLAGS=-O2 -Wall -Wextra -std=c11

SRCDIR=src
BUILDDIR=build
TARGET=$(BUILDDIR)/nesemu

all: $(TARGET)

$(TARGET): $(SRCDIR)/main.c | $(BUILDDIR)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCDIR)/main.c

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

clean:
	rm -rf $(BUILDDIR)
