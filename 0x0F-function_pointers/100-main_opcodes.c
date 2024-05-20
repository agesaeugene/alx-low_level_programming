#include <stdio.h>
#include <stdlib.h>
/**
 * main - opcodes of its own main function is printed
 * @argc: number of arguments supplied
 * @argv: an array of pointers to the arguments
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	y = atoi(argv[1]);
	if (y < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (x = 0; x < y; x++)
	{
		printf("%02hhx", ((char *)main)[x]);
		if (x < y - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
