#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * print_rev - prints the specified string in reverse
  * @s: holds the string we want to reverse
  * Return: void
  */

void print_rev(char *s)
{
	int length = strlen(s);
	int a;

	for (a = length - 1; a >= 0; a--)
	{
		putchar(s[a]);
	}
	printf("\n");

}
