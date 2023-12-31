#include "main.h"

/**
 * puts2 - this prints one char out of two of a string
 * which is followed by another new line
 * @str: string to print the chars from
 */

void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
