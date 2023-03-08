#include "main.h"

/**
  * _pow_recursion - calculates var 1 to the power of var 2
  * @x: var 1
  * @y: var 2
  * Return: var 1 to the power of var2
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	
	if (y == 0)
		return (1);

	
	return (x * _pow_recursion(x, --y));

}
