#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the first node of the list.
 *
 * This function takes the head of a linked list and frees the memory
 * allocated for each node, including the strings stored in each node.
 */

void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *next_node = current->next;

		free(current->str);
		free(current);

		current = next_node;
	}
}
