#include <stdlib.h>
#include "main.h"

/**
 * *create_array - this command creates an array of chars,
 * and then initializes it with a specific char
 * @size: this is the size of the array to be created
 * @c: char to initialize the array c
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	x = (char *) malloc(sizeof(char) * size);

	if (x == NULL)
		return (0);

	while (i < size)
	{
		*(x + i) = c;
		i++;
	}

	*(x + i) = '\0';

	return (x);
}
