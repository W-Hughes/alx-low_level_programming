#PROJECT: 0x09 - Static Libraries.
-Wall -pedantic -Werror -Wextra -c \*.c

ar -rc libmy.a \*.o

ar -t libmy.a

0-isupper.o
0-memset.o
0-strcat.o
1-isdigit.o
1-memcpy.o
1-strncat.o
100-atoi.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o6-abs.o
6-abs.o
9-strcpy.o
\_putchar.o

ranlib libmy.a

creat a main.c file

gcc main.c -L. -lmy -o quote
