#include <stdio.h>

/**
  * main - prints out all the arguments assigned at command line
  * @argc: holds the number of values assigned at command line
  * @argv: Holds all the values assigned at command line
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);

	}

	return (0);

}
