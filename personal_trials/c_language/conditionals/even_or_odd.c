#include <stdio.h>

/**
  * main - Program to determine if a number is even or odd
  *
  * Return: Always 0.
  */

int main(void)
{
	int number_to_test, remainder;

	printf("Enter the number to be tested.: ");
	scanf("%i", &number_to_test);

	remainder = number_to_test % 2;

	if (remainder == 0)
	{
		printf("The number is even.\n");
	}
	if (remainder != 0)
	{
		printf("The number is odd.\n");
	}
	return (0);
}
