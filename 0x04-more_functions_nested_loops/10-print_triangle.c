#include "main.h"

/**
 * print_triangle - prints a triangle of size `size`
 * @size: the size of the triangle to be printed
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');  /* print a new line and return */
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= i; j++)
		{
			_putchar('#');  /* print the "#" character */
		}
		_putchar('\n');  /* print a new line after each row */
	}
}
