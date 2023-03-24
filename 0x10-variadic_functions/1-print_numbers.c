#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - prints out numbers with a separator
  * @separator: This is the separator
  * @n: holds the number of arguments assigned to this function
  * @...: holds the parameters using variadic
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int y;
	int x;

	va_list list;

	va_start(list, n);

	for (y = 0; y < n; y++)
	{
		x = va_arg(list, int);

		if (y == n - 1)
			separator = NULL;

		if (separator != NULL)
			printf("%d%s", x, separator);
		else
			printf("%d", x);
	}
	printf("\n");

	va_end(list);

}
