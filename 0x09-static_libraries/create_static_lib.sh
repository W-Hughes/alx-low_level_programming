#!/bin/bash
# Compile all .c files into object files
gcc -Wall -pedantic -Werror -Wextra -c *.c

# Create the static library libmy.a
ar -rc liball.a *.o
