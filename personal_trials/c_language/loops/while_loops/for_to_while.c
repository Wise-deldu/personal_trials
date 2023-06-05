#include <stdio.h>

/**
 * main - A for loop to compute factorial of a given number
 *
 * Return: Always 0.
 */

int main(void)
{
	int n, i, fact = 1;

	printf("Enter value of n : \n");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		fact = fact * i;
	printf("Factorial result is : %d\n", fact);

	return (0);
}
