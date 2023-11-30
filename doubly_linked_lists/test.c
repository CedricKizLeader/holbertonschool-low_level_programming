#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the address of the head of the linked list.
 * @idx: Index where the new node should be added (starting from 0).
 * @n: Data to be stored in the new node.
 *
 * Return: Address of the new node. Return NULL if it fails or not possible.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (!h)
		return (NULL);

	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)

		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!*h && idx == 0)
	{
		*h = new_node;
		return (new_node);
	}

	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	dlistint_t *current = *h;

	for (unsigned int i = 0; i < idx - 1 && current; i++)
		current = current->next;

	if (!current)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = current;
	new_node->next = current->next;

	if (current->next)
		current->next->prev = new_node;

	current->next = new_node;

	return (new_node);
}
