#include "main.h"

/**
  * rev_string - reverse string
  * @s: string
  * Return: void
  */
void rev_string(char *s)
{
	int length, c;
	char *begin, *end, temp;

	length = string_length(s);
	begin = s;
	end = s;

	for (c = 0; c < length - 1; c++)
		end++;
	for (c = 0; c < length / 2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}

/**
  * string_length - string length
  * @s: string
  * Return: int
  */
int string_length(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;
	return (length);
}
