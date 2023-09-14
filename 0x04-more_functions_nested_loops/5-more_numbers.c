#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int i, num;

	for (i = 0; i <= 14; i++)
	{
		num = i * 10;

		if (num >= 10)
		{
			_putchar('0' + num / 10);
		}

		_putchar('0' + num % 10);
	}

	_putchar('\n');
}
