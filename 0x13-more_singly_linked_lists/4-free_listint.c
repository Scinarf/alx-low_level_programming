#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: list to be freed
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
