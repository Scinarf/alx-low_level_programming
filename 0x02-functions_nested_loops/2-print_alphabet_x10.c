#include "main.h"

/**
  * print_alphabet_x10 - Entry point
  * print the alphabet in lowercase, x10 tumes
  * Return: Always 0 (Success)
  */

void print_alphabet_x10(void)
{
	int ch;
	int a;

	for (a = 0; a <= 9; a++)
	{
		for (ch = 97; ch <= 122; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');

	}

}
