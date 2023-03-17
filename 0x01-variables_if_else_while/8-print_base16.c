#include <stdio.h>

/**
  * main - Entry point
  * Return: 0
  */
int main(void)
{
	char h;
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}

	putchar('\n');
	return (0);
}
