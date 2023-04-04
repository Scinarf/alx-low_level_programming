#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	unsigned int a = strlen(str);
	list_t *vol = (*head);

	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = a;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (vol->next != NULL)
		vol = vol->next;

	vol->next = ptr;

	return (ptr);
}
