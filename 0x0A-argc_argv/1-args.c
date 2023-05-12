#include<stdio.h>
#include<stdlib.h>

/**
  * main - Entry point
  * Description: prints the number of arguments passed into it
  * @argc: the number of arguments provided to the program
  * @argv: the array of pointers to strings
  * Return: 0
  */
int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
