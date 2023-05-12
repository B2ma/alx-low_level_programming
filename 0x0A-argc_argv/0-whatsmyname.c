#include<stdio.h>
#include<stdlib.h>

/**
  * main - entry point
  * Description: the program that prints its name, followed by a new line
  * @argc: the number of arguments provided to the program
  * @argv: Array of pointers to the strings
  * Return: 0
  */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i <= argc; i++)
	{

	if (i == 0)
		printf("%s\n", *argv);
	}
	return (0);
}
