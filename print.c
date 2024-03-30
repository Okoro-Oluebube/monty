#include "monty.h"
/**
 * print_stack --Prints all elements of a list dlistint_t.
 * @h: Pointer to beginning of list dlistint_t.
 * Return: Integer.
 */

size_t print_stack(const stack_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->prev;
		count++;
	}
	return (count);
}
