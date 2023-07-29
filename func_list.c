#include "main.h"

/**
 * print_integer - checks for the conversion specifiers and modifiers
 * @digit: input integer
 *
 * Return: integer number of arguements
 */
int print_integer(int digit)
{
	int i = 0, n, tally = 0;
	char space[32];

	if (digit == '0')
	{
		_print('0');
		return (1);
	}

	if (digit < 0)
	{
		_print('-');
		tally++;
		digit = -digit;
	}
	do {
		space[i++] = '0' + (digit % 10);
		digit /= 10;
		tally++;
	} while (digit > 0);

	space[i] = '\0';
	for (n = i - 1; n >= 0; n--)
	{
		_print(space[n]);
	}
	return (tally);


}

/**
 * char_print - checks for the conversion specifiers and modifiers
 * @a: input integer
 *
 * Return: integer number of arguements
 */
int char_print(int a)
{
	_print(a);
	return (1);
}

/**
 * string_print - prints a string to the standard output
 * @s: character pointer
 *
 * Return: integer number of arguements
 */
int string_print(char *s)
{
	int n, tally = 0;

	if (s == NULL)
		return (NULL);

	for (n = 0; *s != '\0'; n++)
	{
		_print(*s);
		s++;
		tally++;
	}
	return (tally);
}

/**
 * print_base - prints an unsigned int in any base
 * @n: input unsigned integer
 * @base: input required base
 * Return: integer number of arguements
 */
int print_base(unsigned int n, int base)
{
	int tally = 0;
	char digit[32];
	int m = 0, i;

	if (n == 0)
	{
		_print('0');
		return (1);
	}
	while (n != 0)
	{
		digit[m++] = n % base;
		n /= base;
		tally++;
	}
	for (i = tally - 1; i >= 0; i--)
	{
		_print('0' + digit[i]);
	}
	return (tally);
}

/**
 * hexa_print - prints the hexadecimal of anumber
 * @n: input unsigned integer
 * @str: input pointer to string array
 * Return: integer number of arguements
 */
int hexa_print(unsigned int n, char *str)
{
	int len, tally, i = 0;
	char arr[9];

	arr[8] = '\0';

	len = 7;
	tally = 0;

	while (n > 0 && len >= 0)
	{
		arr[len] = str[n % 16];
		n /= 16;
		len--;
	}
	for (i = len + 1; i < 8; i++)
	{
		_print(arr[i]);
		tally++;
	}
	return (tally);
}
