#include <stdio.h>

/**
  * main - prints out the number of values assigned to argv
  * @argc: holds the number of values assigned to argv
  * @argv: holds the values assigned at the command line
  * Return: 0
  */

int main(int argc, char *argv[])
{
	(void) argv; /*Letting the program know, this variable would be unused*/

	printf("%d\n", argc - 1);

	return (0);

}
