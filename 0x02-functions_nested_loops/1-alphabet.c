#include "main.h"

/**
 * print_alphabet - Entry point of the program
 *
 * Description: Prints alpabets in lowercase.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
