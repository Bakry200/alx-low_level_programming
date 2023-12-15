#include <stdio.h>
/**
 * main - prints all alphabet
 * Return: 0
 */
int main(void)
{
	char s = 'a';
	char b;
	while (s <= 'z')
	{
		putchar(s);
		s++;
	}
	b = 'A';
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
