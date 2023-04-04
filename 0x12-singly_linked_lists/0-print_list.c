#include "lists.h"
#include <stdio.h>

/**
  * print_list - prints all the elements of a linked list
  * @h: Holds the address to the linked list
  * Return: The number of nodes printed
  */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		a++;
	}
	return (a);
}
