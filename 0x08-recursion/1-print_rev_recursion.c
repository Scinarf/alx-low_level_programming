#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * _print_rev_recursion - Printing a string in reverse
  * @s: Holds the string we want to reverse
  * Return: void
  */

void _print_rev_recursion(char *s)
{
	int b;

	int a = strlen(s);
	a -= 1;


	for (b = a; b >= 0; b--)
	{
		_putchar(s[b]);
	}

}
