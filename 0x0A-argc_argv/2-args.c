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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
