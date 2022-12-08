#include "lists.h"
#include <stdio.h>

/**
* dlistint_len - function that counts all elements in a doubly linked list
* @h: the head node passed to us
* Return: the number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
