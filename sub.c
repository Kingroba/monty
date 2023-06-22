#include "monty.h"

/**
 * f_sub - Subtracts the top element of the stack from the second top element.
 * @head: Pointer to the head of the stack.
 * @counter: Line number.
 *
 * Description: This function subtracts the second top element of the stack
 *              from the top element and stores the result in the second top
 *              element. The top element is then removed from the stack.
 *
 * Return: No return value.
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int difference, node_count;

	aux = *head;
	for (node_count = 0; aux != NULL; node_count++)
		aux = aux->next;
	if (node_count < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	difference = aux->next->n - aux->n;
	aux->next->n = difference;
	*head = aux->next;
	free(aux);
}
