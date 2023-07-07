#include "main.h"

/**
 * _strncpy - this command copies a string
 * @dest: this is the destination string
 * @src: this is the source string
 * @n: this is the number of bytes to copy
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
