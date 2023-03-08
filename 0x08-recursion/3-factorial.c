#include "main.h"

/**
  * factorial - returning the factorial of a number
  * @n: holds th number
  * Return: the factorial
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (n * factorial(n - 1));

}
