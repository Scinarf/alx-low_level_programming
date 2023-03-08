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
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
