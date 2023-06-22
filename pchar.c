#include "monty.h"

/**
 * pchar_operation - Prints the character at the top of the stack.
 * @head: Pointer to the head of the stack
 * @counter: Line number
 *
 * Description: This function prints the character value at the top of the stack.
 *              It expects the value to be within the range of 0 to 127, inclusive.
 *              If the stack is empty or the value is out of range, an error message
 *              is printed and the program exits with failure.
 *
 * Return: No return value
 */
void pchar_operation(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
