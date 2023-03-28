#include "main.h"

/**
  * _puts - print a string and a new line
  * @s: string
  * Return: void
  */
void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
