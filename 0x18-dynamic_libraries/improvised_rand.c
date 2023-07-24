#include <stdio.h>
/**
* rand - creates random numbers
* Return: the created number
*/
int rand(void)
{
static int numbers[] = {9, 8, 10, 24, 75, 9};
static int index;

index = 0;
if (index >= sizeof(numbers) / sizeof(numbers[0]))
index = 0;

return (numbers[index++]);
}
