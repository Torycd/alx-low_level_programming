#include "main.h"
#include <stdio.h>

/**
 * main -Entry point
 * Return: Always 0
 */
int main(void)
{
	int i = 1;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write("FizzBuzz ");
		}
		else if  (i % 3 == 0)
		{
			write("Fizz ");
		}
		else if (i % 5 == 0)
		{
			write("Buzz ");
		}
		else
		{
			write("%d ", i);
		}
	}
	write("Buzz\n");

	return (0);
}
