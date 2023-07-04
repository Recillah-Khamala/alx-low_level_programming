#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @n: pointer to char params
 * @s: data to change
 * @b: index
 *
 * Return: a pointer to the memory area 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}

	return (s);
}
