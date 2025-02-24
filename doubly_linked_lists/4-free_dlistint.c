#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - Frees the list.
 * @head: Head of the list
 *
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while (head)
{
temp = head;
head = (*head).next;
free(temp);
}
}
