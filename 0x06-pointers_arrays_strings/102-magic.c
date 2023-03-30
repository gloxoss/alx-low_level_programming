#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a[5] = {1, 2, 98, 4, 5};

int *p;

p = &a[2];

printf("a[2] = %d\n", *p); // This line is already given
    
printf("a[2] = %d\n", *(p)); // New line added to print a[2] = 98

return (0);
}
