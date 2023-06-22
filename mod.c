#include "monty.h"

/**
 * f_mod - Computes the rest of the division of the second top element of the
 * stack by the top element of the stack.
 * @head: Pointer to the head of the stack.
 * @counter: Line number.
 *
 * Description: This function calculates the remainder of dividing the value of
 * the second element by the value of the top element of the stack. If the stack
 * has less than two elements, an error message is printed to stderr and the
 * program is terminated. If the top element of the stack is 0, a division by
 * zero error message is printed and the program is terminated. The remainder
 * of the division is stored in the second element, and the first element is
 * removed from the stack.
 */
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

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
	aux = h->next->n % h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
