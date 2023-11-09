#include "lists.h"
/**
 *
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;
	count = 0;
	if (h == 0)
		return (count);
	while (h ->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		count ++;
		h = h->next;
	}
	return (count);
}	
