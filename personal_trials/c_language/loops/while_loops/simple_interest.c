#include <stdio.h>

/**
* main - A program that calculates simple interest for 3 sets
*
* Return: Always 0.
*/

int main(void)
{
	int p, n, count;
	float r, si;

	count = 1;

	while (count <= 3)
	{
		printf("\nEnter values of p, n and r ");
		scanf("%d%d%f", &p, &n, &r);
		si = p * n * r / 100;
		printf("Simple interest = Rs. %f\n", si);
		count++;
	}
	return (0);
}
