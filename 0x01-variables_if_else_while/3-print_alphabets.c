#include <stdio.h>

/**
 * main - entry point
 * 
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * 
 * Return: 0
 */
int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}

	putchar('\n');
	
	return 0;
}
