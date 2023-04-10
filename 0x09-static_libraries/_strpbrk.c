#include <stddef.h>

char *_strchr(char *s, char c);

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to string to be searched.
 * @accept: Pointer to string containing characters to be located.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        if (_strchr(accept, *s))
            return s;
        s++;
    }

    return NULL;
}
