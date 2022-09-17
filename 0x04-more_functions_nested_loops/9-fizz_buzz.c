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
			fwrite("FizzBuzz ");
		}
		else if  (i % 3 == 0)
		{
			fwrite("Fizz ");
		}
		else if (i % 5 == 0)
		{
			fwrite("Buzz ");
		}
		else
		{
			fwrite("%d ", i);
		}
	}
	fwrite("Buzz\n");

	return (0);
}
