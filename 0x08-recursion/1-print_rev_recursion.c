#include "main.h"

/**
 * _print_rev_recursion -This command prints a string in reverse
 * @s: string to print
 * *: noting that stands for (all)
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
