#include <stdio.h>

/**
  * main - A program that asks for a user input.
  *
  * Return: Always 0.
  */

int main(void)
{
	int n, number, triangularNumber;

	printf("What triangular number do you want? ");
	scanf("%i", &number);

	triangularNumber = 0;

	for (n = 1; n <= number; ++n)
	{
		triangularNumber += n;
		printf("Triangular number %i is %i\n", number, triangularNumber);
	}
	return (0);
}
