#include "monty.h"

/**
 * pint_operation - Prints the value at the top of the stack.
 * @head: Pointer to the head of the stack
 * @counter: Line number
 *
 * Description: This function prints the integer value at the top of the stack.
 *              If the stack is empty, an error message is printed and the
 *              program exits with failure.
 *
 * Return: No return value
 */
void pint_operation(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
