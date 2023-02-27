#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * puts2 - prints part of the specified string
  * @str: holds the string in question
  * Return: void
  */

void puts2(char *str)
{
	int a;
	int length = strlen(str);

	for (a = 0; a < length; a += 2)
	{
		putchar(str[a]);
	}
	putchar('\n');

}
