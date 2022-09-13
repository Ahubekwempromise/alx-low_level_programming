#include "main.h"

/**
 * _islower - funtion to print lowercase character
 * @c: is the int that will be use for the argument
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
