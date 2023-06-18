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
	char letters;

	for (letters = 'z' ; letters >= 'a' ; letters--)

		putchar(letters);

	putchar('\n');
	return (0);
}
