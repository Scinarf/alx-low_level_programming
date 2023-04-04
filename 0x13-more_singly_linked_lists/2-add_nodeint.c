#include "lists.h"

/**
  * add_nodeint - adds values to the beginning of our list
  * @head: holds the address to our list
  * @n: holds the value we want to put in our list
  * Return: the address to our new list
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (0);

	ptr->n = n;
	ptr->next = *head;

	*head = ptr;

	return (*head);
}
