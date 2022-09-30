#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints its name, followed by a new line
 * @argc: argument count
 * @argv: argumnet value, a string that comes after calling function
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
