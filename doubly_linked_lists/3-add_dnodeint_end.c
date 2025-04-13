#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer named head and this first node
 * @n: data
 * Return: the value of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nnode;
	dlistint_t *temp = *head;

	nnode = malloc(sizeof(dlistint_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = n;
	nnode->next = NULL;
	if (*head == NULL)
	{
		nnode->prev = NULL;
		*head = nnode;
		return (nnode);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
		temp->next = nnode;
		nnode->prev = temp;
	return (nnode);
}
