#include "main.h"

size_t print_listint(const listint_t *h)
{

listint_t *t = h;

size_t i=0;

while(t != NULL)
{

printf("%d",t->n);

t = t->next;
i++;
}

return (i);

}
