#include "lists.h"
/**
 * add_dnodeint - Add a new node at the beginning of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: The data to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return(NULL);
	new->n =n;
	new-> prev = NULL;
	h = *head;
	if (h != NULL)
	{
		while(h-> prev != NULL)
			h = h-> prev;
	}
	new-> next = h;
	*head = new;
	return (new);
}
