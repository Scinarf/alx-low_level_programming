#include <stdio.h>
#include "main.h"
#include <string.h>


/**
  * *_strcat - concatenates 2 strings
  * @dest: String 1
  * @src: String 2
  * Return: char value
  */

char *_strcat(char *dest, char *src)
{
	char *ch = strcat(dest, src);

	return (ch);
}
