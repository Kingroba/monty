#include "monty.h"

/**
 * f_add - Adds the top two elements of the stack.
 * @head: Pointer to the head of the stack.
 * @counter: Line number.
 *
 * Description: This function adds the values of the top two elements of the
 * stack. If the stack has less than two elements, an error message is printed
 * to stderr and the program is terminated. The result is stored in the second
 * element, and the first element is removed from the stack.
 */
void f_add(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
