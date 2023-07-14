#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - this command allocates memory using malloc
 * @b: thiis is the number of bytes to allocate
 * Return: this returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
