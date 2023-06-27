#include "main.h"

/**
 * swap_int - this is responsible to swap the values of two integers
 * @a: this is the pointer to first value
 * @b: this is the pointer to second value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
