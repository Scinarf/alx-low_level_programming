#include "lists.h"

/**
  * print_listint - print out all the values in our list
  * @h: holds our list
  * Return: the number of nodes or elements in our list
  */

size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}
	return (a);

}
