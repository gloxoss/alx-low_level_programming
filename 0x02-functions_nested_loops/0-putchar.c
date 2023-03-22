#include "main.h"

/**
  * main - Entry point
  * Return: 0
  */
int main(void)
{
	int a[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i, s;

	s = sizeof(a) / sizeof(int);
	for (i = 0; i < s; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
	return (0);
}#include "main.h"

/**
 *   * main - Entry point
 *     * Return: 0
 *       */
int main(void)
{
		int a[] = {95, 112, 117, 116, 99, 104, 97, 114};
			int i, s;

				s = sizeof(a) / sizeof(int);
					for (i = 0; i < s; i++)
					{
								_putchar(a[i]);
					}
						_putchar('\n');
							return (0);
}
