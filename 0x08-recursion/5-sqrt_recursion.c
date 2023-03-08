#include "main.h"

/**
  * _sqrt_recursion - Returns the square root of the number
  * @n: holds the number we need a square for
  * Return: the square root
  */

int root(int c, int i);

int _sqrt_recursion(int n)
{
	int a = 1;

	return (root(n, a));
}

/**
  * root - Searches for the square root and returns it
  * @n: holds the number we need a square for
  * @i: Holds the root
  * Return: the square root
  */

int root(int c, int i)
{
	if (i * i > c)
		return (-1);

	if (i * i == c)
		return (i);

	return (root(c, ++i));
}
