#include <stdio.h>

/**
 * main -Entry point
 * Print f prints Size of Char in bytes
 * Print f prints Size of int in bytes
 * Print f prints Size of long int in bytes
 * Print f prints Size of long long int in bytes
 * Print f prints Size of float in bytes
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}

