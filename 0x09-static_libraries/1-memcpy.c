#include "main.h"

/**
 * *_memcpy - this copies the memory area
 * @dest: this is the destination memory area
 * @src: this command is the memory area to copy from
 * @n: number of bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
