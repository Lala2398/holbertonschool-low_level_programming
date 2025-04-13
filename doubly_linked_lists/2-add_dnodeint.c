#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer named head and this first node
 * @n: data
 * Return: the value of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nnode;
	dlistint_t *temp = *head;

	nnode = malloc(sizeof(dlistint_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = n;
	nnode->next = *head;
	nnode->prev = NULL;
	if (temp != NULL)
		temp->prev = nnode;
	*head = nnode;
	return (nnode);
}
