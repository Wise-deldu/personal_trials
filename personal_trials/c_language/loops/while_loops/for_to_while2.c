#include <stdio.h>

/**
 * main - A for loop to compute factorial of a given number
 *
 * Return: Always 0.
 */

int main(void)
{
	int n, fact = 1;
	int i = 1;

	printf("Enter value of n : \n");
	scanf("%d", &n);

	while (i <= n)
	{
		fact = fact * i;
		i++;
	}
	printf("Factorial result is : %d\n", fact);

	return (0);
}
