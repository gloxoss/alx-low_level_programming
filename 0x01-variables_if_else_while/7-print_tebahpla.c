#include <stdio.h>

/**
  * main - Entry point
  * Return: 0
  */
int main(void)
{
	char az;

	for (az = 'z'; az >= 'a'; az--)
	{
		putchar(az);
	}
	putchar('\n');

	return (0);
}
