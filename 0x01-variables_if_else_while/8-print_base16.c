#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = 48 ; numbers < 58 ; numbers++)

		putchar(numbers);

	for (numbers = 97 ; numbers < 103 ; numbers++)

		putchar(numbers);

	putchar('\n');
	return (0);
}
