#include "main.h"
#include <stdio.h>

/**
  * reverse_array - reversing an array
  * @a: Holding the array
  * @n: holds the array length
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int v;
	int b;

	for (v = 0; v < (n - 1); v++)
	{
		n--;
		b = a[v];
		a[v] = a[n];
		a[n] = b;
	}
}
