#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two ints and prints result to stdout
 * @argc: number of command line args
 * @argv: list of command line args
 * Return: result or 1 if args not = 2
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
