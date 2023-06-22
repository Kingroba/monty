#include "monty.h"

/**
 * pstr_operation - Prints the string starting from the top of the stack.
 * @head: Pointer to the head of the stack
 * @counter: Line number
 *
 * Description: This function prints the string starting from the top of the stack.
 *              The string consists of consecutive ASCII characters until a non-printable
 *              character (greater than 127) or a zero value is encountered. The characters
 *              are printed without a newline character. If the stack is empty, the function
 *              simply prints a newline character.
 *
 * Return: No return value
 */
void pstr_operation(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
