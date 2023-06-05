#include <stdio.h>

/**
 * main - A program that demonstrates dowhile loop.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 1;
	int n;
	int sum = 0;

	printf("Enter the value of n : \n");
	scanf("%d", &n);

	do
	{
		sum = sum + i;
		i = i + 1;
	}
	while (i <= n);
	printf("Sum is : %d\n", sum);
}
