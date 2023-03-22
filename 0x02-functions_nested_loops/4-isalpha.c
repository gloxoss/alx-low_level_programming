#include "main.h"

/**
  * _isalpha - Entry point
  * @c: int
  * Description: check if it's alpha
  * Return: 1 if true, 0 if not
  */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
