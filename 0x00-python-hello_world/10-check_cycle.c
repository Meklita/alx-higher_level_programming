#include "lists.h"
#include <stdio.h>

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list to check
 *
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
	listint_t *first_node = list;
	listint_t *second_node = list;

	if (!list)
		return (0);
	while (first_node && second_node && second_node->next)
	{
		first_node = first_node->next;
		second_node = second_node->next->next;
		if (first_node == second_node)
			return (1);
	}
	return (0);
}
