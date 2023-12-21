#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints putchar using putch
 *
 * Return: Always 0
 */
int main (void)
{
	char str [] = "putchar" ;
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar (str[ch]);
	_putchar ('/n');

	return (0);
}
