#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 *
 * @str: Pointer to the string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *str)
{
int i, j;

char *in = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

char *out = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; in[j] != '\0'; j++)
{
if (str[i] == in[j])
{
str[i] = out[j];
break;
}
}
}
return (str);
}
