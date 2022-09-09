#include <stdio.j>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	};
	char high;

	for (high = 'A'; high <= 'Z'; high++)
	{
		putchar(high);
	};
	putchar('\n');

	return (0);
}

