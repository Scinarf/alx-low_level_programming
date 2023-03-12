#include <stdio.h>
#include "main.h"

/**
  * main - printing out the value in the first position of the argv variable
  * @argc: holds the number of values stored in argv
  * @argv: holds all the values assgned at command line
  * Return: void
  */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
