#include "main.h"
#include <string.h>

/**
  * _strncat - Concatenates the string but with a limit
  * @dest: holds the first string string
  * @src: holds the second string
  * @n: tells us how many positions from the other string should we concatenate
  * Return: char value
  */

char *_strncat(char *dest, char *src, int n)
{
	char *ch = strncat(dest, src, n);

	return (ch);

}
