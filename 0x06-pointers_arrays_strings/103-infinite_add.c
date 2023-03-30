#include <string.h>
#inc
/**
 *  * infinite_add - adds two numbers
 *   * @n1: first number
 *    * @n2: second number
 *     * @r: buffer for result
 *      * @size_r: buffer size
 *       * ahhh! Crazy task! Expand your knowledge
 *        * Return: address of r or 0
 *         */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1, len2, i, j, k, sum, carry;

len1 = strlen(n1);

len2 = strlen(n2);
carry = 0;
k = 0;

for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--, k++)
{
sum = carry;

if (i >= 0)
sum += n1[i] - '0';

if (j >= 0)
sum += n2[j] - '0';

if (k >= size_r - 1 || sum > 9)
return (0);

carry = sum / 10;

r[k] = sum % 10 + '0';
}

r[k] = '\0';

for (i = 0, j = k - 1; i < j; i++, j--)
{
char tmp = r[i];

r[i] = r[j];

r[j] = tmp;

}

return (r);
}
