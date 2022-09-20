#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: address of the address of the first node in the list
 * @number: number value of the new node
 *
 * Return: address of the new node, otherwise NULL
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *current, *prev;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	new->next = NULL;
	if (*head == NULL || (*head)->n > number)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	prev = *head;
	current = *head;
	while (current)
	{
		if (current->n > number)
			break;
		prev = current;
		current = current->next;
	}

	prev->next = new;
	new->next = current;

	return (new);
}
