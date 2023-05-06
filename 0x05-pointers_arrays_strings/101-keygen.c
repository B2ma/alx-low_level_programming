#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
  * main - generates random valid passwords for
  *	the program 101-crackme
  * Return: 0
  */
int main(void)
{
	int password[100];
	int j, sumation, n;
	sumation = 0;
	srand(time(NULL));

	for (j = 0; j < 100; j++)
	{
		password[j] = rand() % 78;
		sumation += (password[j] + '0');
		putchar(password[j] + '0');
		if ((2772 - sumation) - '0' < 78)
		{
			n = 2772 - sumation - '0';
			sumation += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
