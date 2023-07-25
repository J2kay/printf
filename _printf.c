#include "main.h"
#include <stdio.h>
/**
 * _printf - produces output according to a format.
 * @format: character pointer.
 * Return: int number of variable arguements
 */
int _printf(const char *format, ...)
{
	int n, tally = 0;

	va_list vars;

	va_start(vars, format);

	if (format == NULL)
		return (1);
	for (n = 0; *format != '\0'; n++)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				_print('%');
				tally++;
			}
			else
				tally += check_conv_sm(*format, vars);
			format++;
		}
		else
		{
			_print(*format);
			tally++;
			format++;
		}
	}
	va_end(vars);
	return (tally);
}



