#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - returns the length of a string.
 * @s: string whose length is to be found.
 *
 * Return: length of the string.
 */

int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')
        len++;

    return (len);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to pointer to head of the linked list.
 * @str: string to be added to the list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	temp_node = *head;
	while (temp_node->next != NULL)
		temp_node = temp_node->next;

	temp_node->next = new_node;

	return (new_node);
}
