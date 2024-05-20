#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabets in lowercase and upper case
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int low = 'a';
	int cap = 'A';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}
	while (cap <= 'Z')
	{
		putchar(cap);
		cap++;
	}
	putchar('\n');
	return (0);
}
