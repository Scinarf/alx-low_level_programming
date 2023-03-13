#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
  * _strdup - returns a pointer to a newly allocated space in memory
  * @str: Holds the string
  * Return: returns pointer to a newly allocated space in memory
  */

char *_strdup(char *str)
{
	unsigned int a;
	unsigned int b = strlen(str);
	char *ptr;

	ptr = (char *)malloc(b * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < b; a++)
		ptr[a] = str[a];

	return (ptr);

}
