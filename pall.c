#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * f_pall - Print all values on the stack.
 * @head: Pointer to the stack head.
 * @number: Line number.
 *
 * Return: No return value.
 */
void f_pall(stack_t **head, unsigned int number)
{
	stack_t *current = *head;

	(void)number;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
