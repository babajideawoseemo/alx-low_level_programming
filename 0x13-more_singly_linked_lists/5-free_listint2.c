#include "lists.h"
#include <stdlib.h>

/**
 *free_listint2 - function that frees a listint_t
 *@head: a double pointer to list
 *Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *next;
if (head == NULL)
return;
while (*head != NULL)
{
next = (*head)->next;
free(*head);
*head = next;
}
}
