#include "lists.h"

/**
*print_listint - function that prints all the elements of a listint_t list.
*@h: Pointer to the 1st node
*Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{

const listint_t *t = h;

size_t i = 0;

while (t != NULL)
{

printf("%d\n", t->n);

t = t->next;
i++;
}

return (i);

}
