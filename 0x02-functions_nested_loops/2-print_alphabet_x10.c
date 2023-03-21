#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 times
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (i = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}
