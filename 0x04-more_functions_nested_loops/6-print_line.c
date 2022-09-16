#include "main.h"

/**
 * print_line - prints a straight line
 * @n: parater
 * Return: return nothing
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
