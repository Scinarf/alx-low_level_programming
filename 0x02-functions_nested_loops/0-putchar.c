#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int ch[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int a;
	int c;

	for (a = 0; a < 8; a++)
	{
		c = ch[a];
		putchar(c);
	}
	putchar('\n');

	return (0);
}
