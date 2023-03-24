#include "main.h"

/**
  * _isupper - Check if the character is uppercase
  * @c: int
  * Return: 1 if true, 0 if false
  */
int _isupper(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
