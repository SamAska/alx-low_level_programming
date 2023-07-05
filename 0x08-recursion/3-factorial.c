#include "main.h"

/**
 * factorial - this command returns the factorial of a number
 * @n: number to return the factorial from
 * *: noting that this means (all)
 * Return: the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
