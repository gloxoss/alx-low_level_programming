#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints all the elements of a listint_t list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 **/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current;
size_t count = 0;

while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
count++;

current = head;
head = head->next;

if (current <= head)
{
printf("-> [%p] %d\n", (void *)head, head->n);
exit(98);
}
}

return (count);
}
