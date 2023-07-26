#include "main.h"
#include <stdio.h>
/**
 * _print - prints integers
 * @a: input integer
 *
 * Return: integer
 */
int _print(int a)
{
	return (write(1, &a, 1));
}


/**
 * 2char_hexa - converts integers to hexadecimal
 * @n: input integer
 *
 * Return: tally
 */

int char_hex(int n)
{
	int tally = 0, i, j = 0;

	char hexa_dec[] = "0123456789ABCDEF";
	char store[3];

	store[0] = '0';
	store[1] = '0';
	store[2] = '\0';

	if (n < 0)
		return (1);
	while (n > 0)
	{
		store[j] = hexa_dec[n % 16];
		n /= 16;
		j++;
	}
	for (i = 2; i >= 0; i--)
	{
		_print(store[i]);
		tally++;
	}
	return (tally);
}

/**
 * cap_str - prints the string and replaces non-printable with hexadecimal
 * @s: input string array pointer
 *
 * Return: tally
 */
int cap_str(char *s)
{
	int n, tally = 0;

	if (s == NULL)
		return (1);
	for (n = 0; s[n] != '\0'; n++)
	{
		if ((s[n] > 0 && s[n] < 33) || s[n] >= 127)
		{
			_print('\\');
			_print('x');
			tally += char_hex(s[n]);
		}
		else
		{
		_print(s[n]);
		tally++;
		}
	}
	return (tally);
}
