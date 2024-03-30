#include "monty.h"
/**
 * push --Function.
 * @a: parameter.
 * Return: stack_t.
 */

stack_t *push(int a)
{
	stack_t *head, *new;

	head = NULL;
	new = malloc(sizeof(stack_t));
	new->n = a;
	new->next = head;
	new->prev = NULL;
	head = new;
	if (head != NULL)
	{
		while (head->next != NULL)
			head = head->next;
		new->prev = head;
		head->next = new;
		new->next = NULL;
		head = new;
		new->n = a;
	}
	return (*head);
}
