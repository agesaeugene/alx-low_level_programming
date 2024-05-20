#include <stdio.h>
#include <stdlib.h>
/**
 * main - outputs letters except q and e
 *
 * Return: Always(0)
 *
 */
int main(void)

{
	char let = 'a';

	while (let <= 'z')
	{
		if ((let != 'e') && (let != 'q'))
		{
			putchar(let);
		}
		let++;
	}
	putchar('\n');
	return (0);
}
