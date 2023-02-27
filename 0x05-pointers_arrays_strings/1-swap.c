#include "main.h"

/**
  * swap_int - i'm attempting a value swap
  * @a: would be swapped with @b
  * @b: would be swapped with @a
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int o = *a;

	*a = *b;
	*b = o;

}
