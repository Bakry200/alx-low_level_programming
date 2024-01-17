#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: astring input prameter
 * Return: onvert integer from string
 */
int  _atoi(char *s)
{
	unsigned int num = 0;

	do	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '9' &&  *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	}	while (*s++);
	return (num * sign);
}
