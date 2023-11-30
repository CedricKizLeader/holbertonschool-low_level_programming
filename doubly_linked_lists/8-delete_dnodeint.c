#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a
 * dlistint_t linked list
 * @head: Pointer to the address of the head of the doubly linked list
 * @index: Index of the node to be deleted (starting from 0)
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	current = *head;

	if (index == 0)
	{
		*head = current->next;

		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		return (-1);
	}
	temp = current->prev;
	temp->next = current->next;

	if (current->next != NULL)
	{
		current->next->prev = temp;
	}
	free(current);
	return (1);
}
