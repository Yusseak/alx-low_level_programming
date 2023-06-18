#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, l;

	for (i = 48 ; i <= 56 ; i++)
	{
		for (j = 48 ; j <= 57 ; j++)
		{
			for (l = 48; l <= 57 ; l++)
			{
				if (i >= j || j >= l)
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(l);
				if (i != 55 || j != 56 || l != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
