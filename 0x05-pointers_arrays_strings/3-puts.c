#include "main.h"

/**
 * _puts - this prints a string to stdout(standard output)
 * @str: this is the pointer to the string to print
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
