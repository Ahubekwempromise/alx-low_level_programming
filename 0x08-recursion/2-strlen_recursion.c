#include "main.h"

/**
 * _strlen_recursion - calculate the length of string
 * @s: string to be used
 *
 * Return: length of thr string
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
