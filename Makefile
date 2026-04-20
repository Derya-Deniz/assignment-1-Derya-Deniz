CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -O2

SRC = src
BIN = bin

all: datatypes operators conditionals loops cmd magic

$(BIN):
	mkdir -p $(BIN)

datatypes: $(BIN)
	$(CC) $(CFLAGS) $(SRC)/01_datatypes.c -o $(BIN)/datatypes

operators: $(BIN)
	$(CC) $(CFLAGS) $(SRC)/02_operators.c -o $(BIN)/operators

conditionals: $(BIN)
	$(CC) $(CFLAGS) $(SRC)/03_conditionals.c -o $(BIN)/conditionals

loops: $(BIN)
	$(CC) $(CFLAGS) $(SRC)/04_loops.c -o $(BIN)/loops

cmd: $(BIN)
	$(CC) $(CFLAGS) $(SRC)/05_command_line.c -o $(BIN)/cmd

magic: $(BIN)
	$(CC) $(CFLAGS) $(SRC)/06_magic_numbers.c -o $(BIN)/magic

clean:
	rm -rf $(BIN)
