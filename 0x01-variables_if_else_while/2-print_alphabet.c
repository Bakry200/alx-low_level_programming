#include<stdio.h>
/**
 * main - Prints the alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{

	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
