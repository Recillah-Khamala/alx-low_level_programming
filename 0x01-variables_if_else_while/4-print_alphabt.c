#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Prints the alphabet in lowercase,
 * excluding 'q' and 'e', followed by a new line.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}
