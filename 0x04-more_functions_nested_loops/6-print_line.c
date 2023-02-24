#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line
 * @n: determines how long the line will be
 */

void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}

}

