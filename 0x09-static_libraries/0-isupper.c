#include "main.h"

/**
  * _isupper - Function to check if the value is an upper or lower case.
  * @c: is the parameter holding the value we are checking.
  * Return: 0
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);

}
