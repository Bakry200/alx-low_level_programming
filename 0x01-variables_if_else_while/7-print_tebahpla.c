#include <stdio.h>
/**
 * main - prints all alphabet
 * Return: 0
 */
int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
