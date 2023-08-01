#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t size = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		size++;
		temp = current->next;
		free(current);
		current = temp;

		/* Check if current node points to a previously freed node */
		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}

	*h = NULL;

	return (size);
}
