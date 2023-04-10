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
