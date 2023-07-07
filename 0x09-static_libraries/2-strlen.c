#include "main.h"

/**
 * _strlen - this command returns the length of a string
 * @s: while this is the string to evaluate
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
