#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to the pointer to the first element in the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *current, *next_node;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		node_count++;

		next_node = current->next;

		current->next = NULL;

		free(current);

		if (current >= next_node)
		{
			*h = NULL;
			return (node_count);
		}

		current = next_node;
	}

	*h = NULL;
	return (node_count);
}
