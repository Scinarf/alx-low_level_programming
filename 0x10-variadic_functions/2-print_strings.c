#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_strings - Prints out string values
  * @separator: Holds the separator
  * @n: Holds the number of arguments in this function
  * @...: Holds the parameters of this function
  * Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;

	va_list list;
	char *p;

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		p = va_arg(list, char *);

		if (a == n - 1)
			separator = NULL;

		if (separator != NULL)
		{
			if (p == NULL)
				printf("nil");
			else
				printf("%s%s", p, separator);

		}
		else
			printf("%s", p);
	}
	printf("\n");

	va_end(list);
}
