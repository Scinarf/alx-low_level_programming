#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
  * add_node - adds a new node to our list
  * @head: holds our list
  * @str: holds the value we want 
  * Return: the address of the new list
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	unsigned int a = strlen(str);

	ptr->str = strdup(str);
	ptr->len = a;
	ptr->next = (*head);
	(*head) = ptr;

	return (*head);

}
