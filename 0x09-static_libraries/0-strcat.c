#include "main.h"

/**
 * _strcat - this concatenates the two strings
 * @dest: this is the string to append to
 * @src: this is the string to add
 * Return: ths is a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	dest[a] = '\0';

	return (dest);
}
