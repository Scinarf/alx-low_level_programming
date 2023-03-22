#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - prints a name using a pointer
  * @name: holds the name
  * @f: the pointer in question
  * Return: Nothing
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
