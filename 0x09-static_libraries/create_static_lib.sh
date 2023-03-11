#!/bin/bash
gcc -c *.c
ar -rcs liball.a 0-isupper.o 0-memset.o 0-strcat.o
ar -rcs liball.a 1-isdigit.o 1-memcpy.o 1-strncat.o
ar -rcs liball.a 100-atoi.o 2-strchr.o 2-strlen.o 2-strncpy.o
ar -rcs liball.a 3-islower.o 3-puts.o 3-strcmp.o 3-strspn.o
ar -rcs liball.a 4-isalpha.o 4-strpbrk.o 5-strstr.o 6-abs.o
ar -rcs liball.a 9-strcpy.o _putchar.o
