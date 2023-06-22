#include "monty.h"

/**
 * rotate_stack_right - Rotates the stack to the bottom.
 * @head: Pointer to the head of the stack.
 * @counter: Line number.
 *
 * Description: This function rotates the stack to the bottom by moving
 *              the top node to the end and updating the necessary pointers.
 *              If the stack is empty or contains only one node, the function
 *              does nothing.
 *
 * Return: No return value.
 */
void rotate_stack_right(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	while (copy->next)
	{
		copy = copy->next;
	}

	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
