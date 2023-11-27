#include "lists.h"

/**
 * add_node - Ajoute un nouveau nœud au début d'une liste list_t.
 * @head: Pointeur vers le pointeur de la tête de la liste.
 * @str: Chaîne à dupliquer et à ajouter au nouveau nœud.
 * Return: Adresse du nouvel élément, ou NULL en cas d'échec.
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = malloc(strlen(str) + 1);
	if (new_node->str != NULL)
	{
		strcpy(new_node->str, str);
	}
	else
	{
		free(new_node);
		return (NULL);
	}

	if (new_node->str == NULL)
	{
	free(new_node);
	return (NULL);
	}

	new_node->len = strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
