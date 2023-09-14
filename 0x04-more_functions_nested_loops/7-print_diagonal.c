#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i = 1;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	while (i <= n)
	{
		int j = 1;

		while (j < i)
		{
			putchar(' ');
			j++;
		}
		putchar('\\');
		putchar('\n');
		i++;
	}

}
