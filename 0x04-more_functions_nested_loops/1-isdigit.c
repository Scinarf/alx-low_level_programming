#include "main.h"

/**
  * _isdigit - checks if the asigned value is a digit or not
  * @c: will hold the value being checked
  * Return: 0
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);

}
