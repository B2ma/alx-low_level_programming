#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/**
 * main - Entry point
 * Description: program that adds positive numbers
 * @argc: The number of arguments provided to the argument
 * @argv: aray of pointers to the string
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, j;

	int sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (i = 1; i <= argc - 1; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
