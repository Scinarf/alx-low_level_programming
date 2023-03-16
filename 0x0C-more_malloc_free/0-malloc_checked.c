#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - Returns a pointer to the allocated memory
  * @b: Holds ths size of the Memory we want
  * Return: void
  */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
