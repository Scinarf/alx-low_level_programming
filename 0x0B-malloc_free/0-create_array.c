#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * create_array- returns either NULL or a pointer
  * @size: size for memory allocation
  * @c: Holding character
  * Return: NULL or a pointer
  */

char *create_array(unsigned int size, char c)
{
	unsigned int p;
	char *ptr;

	ptr = (char *)malloc(size * sizeof(char));

	if (size == 0 || ptr == NULL)
		return (NULL);

	for (p = 0; p < size; p++)
	{
		ptr[p] = c;
	}

	return (ptr);
}
