#include "lists.h"
/**
 * sum_dlistint - Computes the sum of all the data (n) in a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list.
 * Return: Sum of all the data in the linked list. If the list is empty, returns 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum ;
	sum = 0;
	if(head != NULL)
	{
		while(head->prev != NULL)
			head =head-> prev;
		while(head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
    return sum;
}
