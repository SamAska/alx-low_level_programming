#include "main.h"

/**
 * _strlen_recursion - this returns the length of a string
 * @s: string to calculate the length of
 * *: noting that this represents (all)
 * Return: this gives the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
