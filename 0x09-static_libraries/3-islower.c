#include "main.h"

/**
  * _islower - Entry point
  * checking for lowercase characters
  * @c: is the character being tested
  * Return: Always 0 (Success)
  */

int _islower(int c)
{
	int a;

	a = c;

	if (a >= 97 && a <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
