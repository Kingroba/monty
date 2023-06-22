#include "monty.h"

/**
 * mul_operation - Multiplies the top two elements of the stack.
 * @head: Pointer to the head of the stack
 * @counter: Line number being executed
 *
 * Description: This function multiplies the value of the second top element
 *              of the stack by the value of the top element of the stack.
 *              The result is stored in the second top element, and the top
 *              element is removed from the stack.
 *
 * Return: No return value
 */
void mul_operation(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;
	result = h->next->n * h->n;
	h->next->n = result;
	*head = h->next;
	free(h);
}
