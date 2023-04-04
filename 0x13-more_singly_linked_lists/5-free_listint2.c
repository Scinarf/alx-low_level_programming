#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: list to be freed
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head != NULL)
		return;

	while (*head)
	{
		ptr = (*head);
		*head = ptr->next;

		free(ptr);
	}
}
