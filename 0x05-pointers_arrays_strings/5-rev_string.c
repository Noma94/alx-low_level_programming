#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int counter = 0;
	int i;
	char rev;

	while (s[counter] != '\0')
		counter++;

	for (i = 0; i < counter / 2; i++)
	{
		rev = s[i];
		s[i] = s[counter - 1 - i];
		s[counter - 1 - i] = rev;
	}
}
