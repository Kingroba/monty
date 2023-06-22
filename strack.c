#include "monty.h"

/**
 * set_stack_mode - Sets the stack mode to LIFO (stack mode).
 * @head: Pointer to the head of the stack.
 * @counter: Line number.
 *
 * Description: This function sets the stack mode to LIFO (stack mode),
 *              where new elements are added and removed from the top of
 *              the stack.
 *
 * Return: No return value.
 */
void set_stack_mode(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
