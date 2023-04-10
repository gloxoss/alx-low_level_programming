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
