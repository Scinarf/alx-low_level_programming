#include "main.h"
#include <stdio.h>
#include <string.h>

void rev_string(char *s)
{
	int a;
	int length = strlen(s);
	int middle = length/2;
	char h;

	for (a = 0; a < middle; a++)
	{
		h = s[a];

		s[a] = s[length - a - 1];
		s[length - a - 1] = h;
	}

}
