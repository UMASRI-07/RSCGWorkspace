CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj

all: $(BIN)/app

Setup:	
			mkdir $(OBJ) $(BIN)

$(BIN)/app: $(OBJ)/assign3c.o
			$(CC) -o $(BIN)/app $(OBJ)/assign3c.o

$(OBJ)/assign3c.o: $(SRC)/assign3c.c
			$(CC) -c $(SRC)/assign3c.c -I $(INC)/
		        mv assign3c.o $(OBJ)/

clean: 		
			rm -f  a.out *.o
			rm -f $(OBJ)/*
			rm -f $(BIN)/*
			@echo "Cleaning is done!"
