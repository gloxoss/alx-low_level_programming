#include "main.h"

/**
 * _strcmp - Compares two strings.
 *
 * @s1: Pointer to the first string to be compared.
 * @s2: Pointer to the second string to be compared.
 *
 * Return: Integer value indicating the lexicographical relationship between
 *         the two strings. If s1 is less than s2, the function returns a
 *         negative number; if s1 is greater than s2, the function returns a
 *         positive number; and if s1 and s2 are equal, the function returns 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return ((s1[i] < s2[i]) ? -15 : 15);
		}
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	else
	{
		return ((s1[i] < s2[i]) ? -15 : 15);
	}
}

