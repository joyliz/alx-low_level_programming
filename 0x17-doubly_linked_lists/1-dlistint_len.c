#include "lists.h"

/**
 * dlistint_len - no of elements in linked dlistint_t list
 * @h: ptr to the head of the list
 *
 * Return: no of elements in the dlistint
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
