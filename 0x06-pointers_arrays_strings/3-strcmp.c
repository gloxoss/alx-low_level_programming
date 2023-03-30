#include "main.h"

/**
 * _strcmp - Compares two strings.
 *
 * @s1: Pointer to the first string to be compared.
 * @s2: Pointer to the second string to be compared.
 *
 * Return:value less than 0 if string is less than the other,
 * value greater than 0
 */

int _strcmp(char *s1, char *s2)
{
	int counter, compare_value;

	counter = 0;

	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
	compare _value = s1[counter] - s2[counter];

	return (compare_value);
}

