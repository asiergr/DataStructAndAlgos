CC = gcc
SRC_DIR = .
INC_DIR = ./../include
OBJ_DIR= ./obj

LIBS = 
CFLAGS= 

_HFILES =
HFILES = $(patsubst %, $(INC_DIR)/%,$(_HFILES))

_OFILES = main.o
OFILES = $(patsubst %, $(OBJ_DIR)/%,$(_OFILES))

default: main

$(OBJ_DIR)/%.o: %.c $(HFILES)
	$(CC) -c $< -o $@ $(CFLAGS)

main: $(OFILES)
		$(CC) $(LIBS) -o $@ $^

.PHONY: clean

clean:
		rm -f $(OBJ_DIR)/*.o *~ core $(INC_DIR)/*~ 
