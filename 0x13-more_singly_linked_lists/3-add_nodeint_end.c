#include "lists.h"

/**
  * add_nodeint_end - adds values to the tail of our list
  * @head: holds the address to our list
  * @n: holds our value
  * Return: the address to our new list
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	listint_t *s = (*head);

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (s->next != NULL)
	{
		s = s->next;
	}

	s->next = ptr;

	return (ptr);
}
