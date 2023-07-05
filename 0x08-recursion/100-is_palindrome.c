#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - this command checks if a string is a palindrome
 * @s: the string to reverse
 * *: noting that signifies (all)
 * Return: 1 if it is, 0 if it's not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}


/**
 * _strlen_recursion - this command returns the length of a string
 * @s: to calculate the length of the string
 * *: nting that it signifies (all)
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}


/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 * *: this signifies (all)
 * Return: 1 if palindrome, 0 if its not palindrome
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
