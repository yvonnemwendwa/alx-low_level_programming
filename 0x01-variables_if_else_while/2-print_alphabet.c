#include <stdio.h>
/**
 * main - main entry
 *
 * Return: always: 0
 *
 */
int main(void)
{
	char x = 'a';

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar (x);
	}
	putchar ('\n');
	return (0);
}
