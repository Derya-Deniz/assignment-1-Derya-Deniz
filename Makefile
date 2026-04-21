CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -O2

all: 01_datatypes 02_operators 03_conditionals 04_loops 05_command_line 06_magic_numbers

01_datatypes:
	$(CC) $(CFLAGS) 01_datatypes.c -o 01_datatypes

02_operators:
	$(CC) $(CFLAGS) 02_operators.c -o 02_operators

03_conditionals:
	$(CC) $(CFLAGS) 03_conditionals.c -o 03_conditionals

04_loops:
	$(CC) $(CFLAGS) 04_loops.c -o 04_loops

05_command_line:
	$(CC) $(CFLAGS) 05_command_line.c -o 05_command_line

06_magic_numbers:
	$(CC) $(CFLAGS) 06_magic_numbers.c -o 06_magic_numbers

clean:
	rm -f 01_datatypes 02_operators 03_conditionals 04_loops 05_command_line 06_magic_numbers
