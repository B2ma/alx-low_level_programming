#include<stdio.h>

/**
  * main -Enthy point
  * Print f prints Size of Char in bytes
  * Print f prints Size of int in bytes
  * Print f prints Size of long int in bytes
  * Print f prints Size of long long int in bytes
  * Print f prints Size of float in bytes
  */
int main(void)
{
	printf("Size of Char in bytes: 1%d bytes\n", sizeof(char));
	printf("Size of int in bytes: 1%d bytes\n", sizeof(int));
	Printf("Size of long int in bytes: 1%d bytes\n", sizeof(long));
	printf("Size of long long int in bytes: 1%d bytes\n", sizeof(double));
	printf("Size of float in bytes: 1%d bytes\n", sizeof(float));
	return (0);
}
