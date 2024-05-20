#include <stdio.h>
/**
 * main - outputs all arguments it receives
 * @argc: counted arguments passed
 * @argv: argument vector pointer to string
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
