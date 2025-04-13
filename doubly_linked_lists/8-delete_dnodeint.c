#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list
 * @head: pointer named head + this first node
 * @index: index of node, starting from 0
 * Return: insersts node at a given index
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *deleted;
	unsigned int c = 0;

	while (temp != NULL)
	{
		if (c == index)
		{
			if (c == 0)
			{
				*head = temp->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				deleted->next = temp->next;
				if (temp->next != NULL)
					temp->next->prev = deleted;
			}
			free(temp);
			return (1);
		}
		deleted = temp;
		temp = temp->next;
		c++;
	}
	return (-1);
}
