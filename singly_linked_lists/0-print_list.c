#include "lists.h"


/**
 * print_list - Imprime tous les éléments d'une liste list_t.
 * @h: Pointeur vers le début de la liste.
 * Return: Le nombre de nœuds.
 */

size_t print_list(const list_t *h)

{
	const list_t *current = h;
	size_t node_count = 0;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->len,
				(current->str != NULL) ? current->str : "(nil)");
		current = current->next;
		node_count++;
	}
	return (node_count);
}
