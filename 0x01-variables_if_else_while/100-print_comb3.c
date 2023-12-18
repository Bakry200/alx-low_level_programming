#include <stdio.h>
/**
 * main - print all differ tow digit number
 * Return: 0
 */
int main(void)
{
	int s = 0;
	int b;

	while (s <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			if (s != b && s < b)
			{
				putchar(s + 48);
				putchar(b + 48);
			if (s + b != 17)
			{
				putchar(',');
				putchar(' ');
			}
			}
			b++;
		}
		s++;
	}
	putchar('\n');
	return (0);
}
