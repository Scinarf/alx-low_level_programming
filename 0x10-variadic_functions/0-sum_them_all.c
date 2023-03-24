#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - Using vardic to get the sum
  * @n: holds the number of arguments that'll be assigned to this function.
  * @...: variadic function used to hold unknown amount of parameter.
  * Return: - the sum of all the arguments assigned
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int a;
	int sum = 0;

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		sum += va_arg(list, int);

	}

	va_end(list);

	return (sum);

}
