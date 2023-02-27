#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * puts_half - prints half of our string
  * @str: holds our string
  * Return: void
  */

void puts_half(char *str)
{
	int length = strlen(str);
	int middle = length / 2;
	int a;

	for (a = middle; a < length; a++)
	{
		putchar(str[a]);
	}
	putchar('\n');
}
