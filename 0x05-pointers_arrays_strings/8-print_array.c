#include "main.h"
#include <stdio.h>

/**
  * print_array - print n elements of an array of integers with a new line
  * @a: int
  * @n: int
  * Return: void
  */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
			printf(", ");
	}
	printf("\n");
}
