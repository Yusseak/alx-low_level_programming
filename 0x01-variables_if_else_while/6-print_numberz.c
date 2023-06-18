#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, and then in uppercase,
 *		Print all the letters except q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = '0' ; numbers <= '9' ; numbers++)
	{
		putchar(numbers);
	}

	putchar('\n');

	return (0);
}
