#include <stdio.h>

/**
 * main - Display contents of a file on screen
 *
 * Return: Always 0.
 */

int main(void)
{
	FILE *fp;
	char ch;
	fp = fopen("PR1.C", "r");

	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF)
			break;
		printf("%c", ch);
	}
	printf("\n");
	fclose(fp);
	return (0);
}
