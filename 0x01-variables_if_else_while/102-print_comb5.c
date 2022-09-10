#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int p;
	int m;

	for (p = 0; p <= 99; p++)
	{
		for (m = p + 1; m <= 99; m++)
		{
			putchar(p / 10 + '0');
			putchar(p % 10 + '0');
			putchar(' ');
			putchar(m / 10 + '0');
			putchar(m % 10 + '0');

			if (!(p == 98 && m == 98))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
