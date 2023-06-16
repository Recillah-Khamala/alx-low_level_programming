#include <stdio.h>

/**
 * main -Entry point of the program
 *
 * Description: This program prints the size of types on the 
 * computer it is compiles and run on.
 *
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	printf("Size of a double: %lu byte(s)\n", sizeof(double));
	printf("Size of a long double: %lu byte(s)\n", sizeof(long double));
	printf("Size of a void pointer: %lu byte(s)\n", sizeof(void *));
	printf("Size of a _Bool: %lu byte(s)\n", sizeof(_Bool));
	printf("Size of an enum: %lu byte(s)\n", sizeof(enum {VALUE}));
	printf("Size of a struct: %lu byte(s)\n", sizeof(struct {int member;}));
	printf("Size of a union: %lu byte(s)\n", sizeof(union {int member;}));

	return (0);
}
