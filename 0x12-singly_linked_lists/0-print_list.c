#include "lists.h"

/**
 * print_list - function that prints all the elements
 * @h: list given by main
 * Return: the number of nodes, else -1
 */

size_t print_list(const list_t *h)
{
	size_t night;

	night = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s \n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		night++;
	}
	return (night);

}
