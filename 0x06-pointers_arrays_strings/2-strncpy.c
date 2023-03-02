#include "main.h"
#include <string.h>

/**
  * *_strncpy - copying a string to another
  * @dest: this is string one
  * @src: this is string two
  * @n: tells us how many values from string 2 should be copied to string 1
  * Return: char value
  */

char *_strncpy(char *dest, char *src, int n)
{
	char *ch = strncpy(dest, src, n);

	return (ch);

}
