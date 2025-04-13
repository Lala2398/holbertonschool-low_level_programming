#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 * @head: pointer named head + this first node
 * @index: index of the node, starting from 0
 * Return: n_th node of a linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int c = 0;

	if (head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		if (c == index)
		{
			return (temp);
		}
		temp = temp->next;
		c++;
	}
	return (temp);
}
