#include <stdio.h>
#include "main.h"

/**
 * main - this is the function name that
 * prints the name of the program
 * @argc: this is argumet count which means
 * it counts the number of arguments
 * @argv: this is the array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
