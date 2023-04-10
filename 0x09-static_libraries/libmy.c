!<arch>
0-isupper.c/    0           0     0     644     210       `
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
0-memset.c/     0           0     0     644     350       `
/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to memory area to be filled.
 * @b: Value to be set.
 * @n: Number of bytes to be filled starting from s.
 *
 * Return: Pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
        s[i] = b;

    return s;
}
0-strcat.c/     0           0     0     644     414       `
/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Return: pointer to concatenated string
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = 0, i;

    while (dest[dest_len] != '\0')
        dest_len++;

    for (i = 0; src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];

    dest[dest_len + i] = '\0';

    return (dest);
}
1-isdigit.c/    0           0     0     644     211       `
#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}


1-memcpy.c/     0           0     0     644     401       `
/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 * @dest: Pointer to destination memory area.
 * @src: Pointer to source memory area.
 * @n: Number of bytes to be copied.
 *
 * Return: Pointer to destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
        dest[i] = src[i];

    return dest;
}

1-strncat.c/    0           0     0     644     481       `
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

100-atoi.c/     0           0     0     644     435       `
/**
 * _atoi - converts a string to an integer
 * @s: pointer to string to convert
 *
 * Return: integer value of string
 */
int _atoi(char *s)
{
    int i, sign = 1, num = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '-')
            sign *= -1;
        else if (s[i] >= '0' && s[i] <= '9')
            num = num * 10 + (s[i] - '0');
        else if (num > 0)
            break;
    }

    return (num * sign);
}


2-strchr.c/     0           0     0     644     417       `
#include <stddef.h>

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to string to be searched.
 * @c: Character to be located.
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
    while (*s)
    {
        if (*s == c)
            return s;
        s++;
    }

    return NULL;
}


2-strlen.c/     0           0     0     644     209       `
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

2-strncpy.c/    0           0     0     644     394       `
/**
 * _strncpy - copies n bytes of a string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to copy
 *
 * Return: pointer to copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];

    for (; i < n; i++)
        dest[i] = '\0';

    return (dest);
}
3-islower.c/    0           0     0     644     210       `
#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
3-puts.c/       0           0     0     644     187       `
#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @s: the string to print
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);
	_putchar('\n');
}

3-strcmp.c/     0           0     0     644     311       `
/**
 * _strcmp - compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: difference between first non-matching characters
 */
int _strcmp(char *s1, char *s2)
{
    int i;

    for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++)
        ;

    return (s1[i] - s2[i]);
}

3-strspn.c/     0           0     0     644     624       `
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to string to be searched.
 * @accept: Pointer to string containing characters to be located.
 *
 * Return: Number of bytes in the initial segment of s which consist only of
 *         bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j, len = 0;

    for (i = 0; s[i]; i++)
    {
        for (j = 0; accept[j]; j++)
        {
            if (s[i] == accept[j])
            {
                len++;
                break;
            }
        }

        if (!accept[j])
            break;
    }

    return len;
}
4-isalpha.c/    0           0     0     644     241       `
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 *
 * Return: 1 if c is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}


4-strpbrk.c/    0           0     0     644     509       `
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

5-strstr.c/     0           0     0     644     807       `
#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: The string to be searched
 * @needle: The substring to be located
 *
 * Return: Pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *start = haystack;
        char *search = needle;

        /* Find the first matching character */
        while (*haystack && *search && (*haystack == *search))
        {
            haystack++;
            search++;
        }

        /* If the entire substring is found, return the starting address */
        if (!*search)
            return start;
        
        haystack = start + 1;
    }

    /* If the substring is not found, return NULL */
    return NULL;
}

6-abs.c/        0           0     0     644     193       `
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to compute
 *
 * Return: the absolute value of n
 */
int _abs(int n)
{
	return (n < 0 ? -n : n);
}

9-strcpy.c/     0           0     0     644     365       `
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the
 * buffer pointed to by dest
 * @dest: the buffer to copy to
 * @src: the string to copy
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while ((*dest++ = *src++))
		continue;

	return (p);
}

