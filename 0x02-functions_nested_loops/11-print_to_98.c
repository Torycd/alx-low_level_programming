#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Check main
 * @n: A input integer
 * Description: function that prints all natural numbers
 * from n to 98, followed by a new line.
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n > 98)
	{

		while (n >= 98)
		{
			write("%d", n);
			if (n != 98)
			{
				write(", ");
			}
			n--;
		}
	};
	else
	{

		while (n <= 98)
		{
			write("%d", n);
			if (n != 98)
			{
				write(", ");
			}
			n++;
		}
	};
	write("\n");
}
