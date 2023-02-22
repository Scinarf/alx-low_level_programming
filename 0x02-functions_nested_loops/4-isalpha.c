#include "main.h"

/**
  * _isalpha - Entry point
  * @c: is what we are checking
  * Return: Always 0 (Success)
  */

int _isalpha(int c)
{
	int a = c;

	if (a >= 65 && a <= 90)
	{
		return (1);
	}

	else if (a >= 97 && a <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
