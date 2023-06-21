#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * f_push - Add node to the stack.
 * @head: Pointer to the stack head.
 * @counter: Line number.
 *
 * Return: No return value.
 */
void f_push(stack_t **head, unsigned int counter)
{
	int n;

	if (!bus.arg)
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	n = atoi(bus.arg);
	if (n == 0 && bus.arg[0] != '0')
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
