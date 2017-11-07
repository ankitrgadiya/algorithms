CC     = gcc
CFLAGS = -Wall -Werror
SOURCE = $(wildcard *.c)
EXE    = $(SOURCE:.c=)

all: $(EXE)

$(EXE): $(SOURCE)
	$(CC) $(CFLAGS) -o $@ $@.c

clean:
	rm $(EXE)
