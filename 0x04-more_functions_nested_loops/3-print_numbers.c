#include <stdio.h>
#include "main.h"

/**
  * print_numbers - this function prints values from 0 to 9
  *
  * Return: void
  */

void print_numbers(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	putchar('\n');

}
