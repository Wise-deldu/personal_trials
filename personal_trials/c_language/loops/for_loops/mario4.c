#include <stdio.h>

/**
  * main - A code that prints several bricks in rows and columns
  *
  * Return: Always 0.
  */

int main(void)
{
	int n;

	printf("Size:");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("#");
		}
		printf("\n");
	}
	return (0);
}
