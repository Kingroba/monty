#include "monty.h"

/**
 * pop_operation - Removes the top element of the stack.
 * @head: Pointer to the head of the stack
 * @counter: Line number
 *
 * Description: This function removes the top element from the stack.
 *              If the stack is empty, an error message is printed and
 *              the program exits with failure.
 *
 * Return: No return value
 */
void pop_operation(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
