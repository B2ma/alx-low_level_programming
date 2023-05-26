#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 * Description: prints all arguments it receives
 * @argc: The number of arguments provided to the argument
 * @argv: aray of pointers to the string
 * Return: 0
 */
int main(int argc, char **argv)
{
	int n1, n2;
	int mult = 1;

	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mult = n1 * n2;
	
	printf("%d\n", mult);
	return (0);
}
