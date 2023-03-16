#include <stdlib.h>
#include "main.h"

/**
  * *array_range - creates an array of integers
  * @min: minimum range of values stored
  * @max: maximum range of values stored and number of elements
  * Return: pointer to the new array
  */

int *array_range(int min, int max)
{
	int *ptr;
	int t;
	int a = 0;

	if (min > max)
		return (NULL);

	t  = (max - min) + 1;

	ptr = (int *)malloc(sizeof(int) * t);

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[a] = min;
		a++;
		min++;
	}
	return (ptr);
}
