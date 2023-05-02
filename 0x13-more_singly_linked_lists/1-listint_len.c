#include "lists.h"
/**
*listint_len - returns the number of elements in a linked listint_t list.
*@h: Pointer to the 1st node
*Return: the number of nodes
*/
size_t listint_len(const listint_t *h)
{

listint_t *t = h;

size_t i = 0;

while (t != NULL)
{
t = t->next;
i++;
}

return (i);

}
