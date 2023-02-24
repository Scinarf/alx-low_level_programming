#include <stdio.h>
#include "main.h"

/**
  * print_most_numbers - prints out some numbers between 0 and 9
  *
  * Return: void
  */

void print_most_numbers(void)
{
	int a = 48;

	while (a <= 57)
	{
		if (a != 50 && a != 52)
		{
			putchar(a);
		}
		a++;

	}
	putchar('\n');

}

