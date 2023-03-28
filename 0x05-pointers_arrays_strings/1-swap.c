#include "main.h"

/**
  * swap_int - swap a with b
  * @a: value 1
  * @b: value 2
  * Return: void
  */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
