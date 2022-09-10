#include <stdio.h>

/**
 * main - entry point
 * Description: using the main function
 * this program print "0, 1, 2. 3, 4, 5, 6, 7, 8. 9"
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 33; a <= 42; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
