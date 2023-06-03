#include <stdio.h>

/**
 * main - A program that demonstrates nested-if statements
 *
 * Return: Always 0.
 */

int main(void)
{
	int x, y, z, max;

	printf("Enter any three values : \n");
	scanf("%d%d%d", &x, &y, &z);

	if (x > y)
	{
		if (x > z)
			max = x;
		else
			max = z;
	}
	else
	{
		if (y > z)
			max = y;
		else
			max = z;
	}
	printf("\nMaximum value is : %d\n\n", max);

	return (0);
}
