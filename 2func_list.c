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
 * char_hex - converts integers to hexadecimal
 * @n: input integer
 *
 * Return: tally
 */

int char_hex(int n)
{
	int tally = 0, i, j = 0;

	char hexa_dec[] = "0123456789ABCDEF";
	char store[3] = {'0', '0', '\0'};

	if (n == 0)
	{
		_print('0');
		tally++;
	}

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

/**
 * address - prints the address of a pointer
 * @ptr: void pointer
 *
 * Return: tally
 */
int address(void *ptr)
{
	int n, i = 0, tally = 0;
	const char hexadecimal[] = "0123456789abcdef";
	char store[18];

	unsigned long temp = (unsigned long)ptr;


	_print('0');
	tally++;
	_print('x');
	tally++;

	for (n = 15; n >= 0; n--)
	{
		store[n] = hexadecimal[temp % 16];
		temp /= 16;
	}


	while (store[i] == '0' && i < 15)
		i++;
	while (i < 16)
	{
		_print(store[i]);
		tally++;
		i++;
	}
	return (tally);
}

/**
 * str_rev - prints string in reverse
 * @s: string pointer
 *
 * Return: tally
 */
int str_rev(char *s)
{
	int i, n, len = 0, tally = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (n = len; n >= 0; n--)
	{
		_print(s[n]);
		tally++;
	}
	return (tally);
}
