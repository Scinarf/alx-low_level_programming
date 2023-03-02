#include "main.h"
#include <string.h>

/**
  * string_toupper - replaces all lowercase words with uppercases
  * @n: holds the string
  * Return: char value
  */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}

