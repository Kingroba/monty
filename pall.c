#include "monty.h"

/**
 * pall_operation - Prints all the elements of the stack.
 * @head: Pointer to the head of the stack
 * @counter: Line number (unused)
 *
 * Description: This function prints all the elements of the stack,
 *              starting from the top element to the bottom element.
 *
 * Return: No return value
 */
void pall_operation(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
