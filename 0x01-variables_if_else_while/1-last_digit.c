#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Returns the last digit of a number.
 *
 * Description: This function serves as the entry point for the program.
 * 
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	c = abs(n) % 10;
	if (n > 0 && c > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, c);
	}
	else if (n > 0 && c == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, c);
	}
	else if (n > 0 && c < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, c);
	}
	else if (n < 0 )
	{
		printf("Last digit of %d is -%d and is less than 6 and not 0\n", n, c);
	}
	return (0);
}
