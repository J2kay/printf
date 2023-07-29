#include "main.h"
/**
 * check_conv_sm - checks for the conversion specifiers and modifiers
 * @conv: input conversion specifier
 * @vars: pointer to variable arguements
 * Return: tally
 */
int check_conv_sm(char conv, va_list vars)
{
	int tally = 0;

	if (conv == 'c')
		tally += char_print(va_arg(vars, int));
	else if (conv == 's')
		tally += string_print(va_arg(vars, char *));
	else if (conv == 'd')
		tally += print_integer(va_arg(vars, int));
	else if (conv == 'i')
		tally += print_integer(va_arg(vars, int));
	else if (conv == 'b')
		tally += print_base(va_arg(vars, unsigned int), 2);
	else if (conv == 'o')
		tally += print_base(va_arg(vars, unsigned int), 8);
	else if (conv == 'u')
		tally += print_base(va_arg(vars, unsigned int), 10);
	else if (conv == 'x')
		tally += hexa_print(va_arg(vars, unsigned int), "0123456789abcdef");
	else if (conv == 'X')
		tally += hexa_print(va_arg(vars, unsigned int), "0123456789ABCDEF");
	else if (conv == 'S')
		tally += cap_str(va_arg(vars, char *));
	else if (conv == 'p')
		tally += address(va_arg(vars, void *));
	else if (conv == 'r')
		tally += str_rev(va_arg(vars, char *));
	return (tally);
}
