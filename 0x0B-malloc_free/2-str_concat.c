#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
  * str_concat - Concates and returns the string
  * @s1: holds string 1
  * @s2: holds string 2
  * Return: Returns the concated string
  */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int a,b,c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = strlen(s1);
	b = strlen(s2);
	c = a + b + 1;

	ptr = (char *)malloc(c * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	a = 0;
	b = 0;

	while (s1[a] != '\0')
	{
		ptr[a] = s1[a];
		a++;
	}

	while (s2[b] != '\0')
	{
		ptr[a] = s2[b];
		b++;
		a++;
	}

	return (ptr);

}
