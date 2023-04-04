#include "lists.h"

/**
  * list_len - prints number of elements in our linked list
  * @h: holds the linked list
  * Return: returns the number of elements in our list
  */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		a++;
		h = h->next;
	}

	return (a);

}
