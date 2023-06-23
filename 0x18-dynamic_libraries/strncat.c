#include "main.h"

/**
 * _strncat - concatenates n bytes of two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to concatenate
 *
 * Return: pointer to concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0, i;

    while (dest[dest_len] != '\0')
        dest_len++;

    for (i = 0; src[i] != '\0' && i < n; i++)
        dest[dest_len + i] = src[i];

    dest[dest_len + i] = '\0';

    return (dest);
}
