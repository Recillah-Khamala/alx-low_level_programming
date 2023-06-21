#include "main.h"

/*
 * print_alphabet_x10(void): entry point
 *
 * Description: Print alphabet 10 times.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int numb = 0;
	char letter = 'a';

	while (numb < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
		numb++;
	}
}
