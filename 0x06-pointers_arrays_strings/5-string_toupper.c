#include "main.h"
#include <string.h>

/**
  * string_toupper - replaces all lowercase words with uppercases
  * @n: holds the string
  * Return: char value
  */

char *string_toupper(char *n)
{
	int a;
	int l = strlen(n) - 1;
	int ch;

	for (a = 0; a < l; a++)
	{
		ch = n[a];
		if (ch >= 97 && ch <= 122)
		{
			n[a] = ch - 32;
		}
	}

	return (n);

}
