#include "main.h"

/**
 * swap_int - swap two integers value
 * @a: first integers
 * @b: second integer
 * Return: return nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
