#include <stdio.h>

int factorial(int n);

/**
 * factorial - a function that calculates the factorial of a
 * number
 *
 * @n: The number to be input.
 *
 * Return: factorial
 */

int factorial(int n)
{
	int x, y = 1;

	for (x = 1; x <= n; x++)
		y = y * x;
	return (y);
}

/**
 * main - a program that calls the factorial function.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n, res;

	printf("Enter the number: \n");
	scanf("%d", &n);

	res = factorial(n);
	printf("Factorial result is: %d\n", res);

	return (0);
}
