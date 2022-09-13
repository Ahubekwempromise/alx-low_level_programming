#include "main.h"

/**
 * _isalpha - funtion that check alphabet character
 * @c: is the int that will be use for the argument
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);

}
