#include "lists.h"

/**
  * listint_len - returning the length of our list
  * @h: holds the address to our list
  * Return: return the length of our list
  */

size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		a++;
		h = h->next;
	}

	return (a);
}
