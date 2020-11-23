HFILEDIR= ./../include
CC=gcc
CFLAGS= $(HFILEDIR)

OFILEDIR= ./obj

_HFILES =
HFILES = $(patsubst %, $(HFILEDIR)/%,$(_HFILES))

_OFILES = main.o
OFILES = $(patsubst %, $(OFILEDIR)/%,$(_OFILES))

default: main

$(OFILEDIR)/%.o: %.c $(HFILES)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OFILES)
		$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
		rm -f $(OFILEDIR)/*.o *~ core $(HFILEDIR)/*~ 
