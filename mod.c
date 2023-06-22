#include "monty.h"

/**
 * mod_operation - Computes the remainder of the division of the second
 * top element of the stack by the top element of the stack.
 * @head: Pointer to the head of the stack
 * @counter: Line number being executed
 * Return: No return value
 */
void mod_operation(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, result;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	result = h->next->n % h->n;
	h->next->n = result;
	*head = h->next;
	free(h);
}
