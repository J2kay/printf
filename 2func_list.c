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
