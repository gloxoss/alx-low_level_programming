#include "main.h"

/**
  * _islower - Entry point
  * Description: if lowercase return 1 else return 0
  * @c: int
  * Return: 1 when true and 0 when false
  */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
