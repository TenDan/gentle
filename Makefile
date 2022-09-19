
CC=clang
CFLAGS=-g -Wall

LINKER=clang
LFLAGS=-Wall -I. -lm

TARGET=gentle

SRCDIR=src
OBJDIR=obj
BINDIR=bin

SOURCES := $(wildcard $(SRCDIR)/*.c) $(wildcard $(SRCDIR)/**/*.c)
INCLUDES := $(wildcard $(SRCDIR)/*.h) $(wildcard $(SRCDIR)/**/*.h)
OBJECTS := $(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

rm = rm -f

$(BINDIR)/$(TARGET): $(OBJECTS)
	$(LINKER) $(OBJECTS) $(LFLAGS) -o $@

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@


.PHONY: clean
clean:
	$(rm) $(OBJECTS)

.PHONY: remove
remove: clean
	$(rm) $(BINDIR)/$(TARGET)