#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);

int _print(int a);
int check_conv_sm(char conv, va_list vars);
int print_integer(int digit);
int char_print(int a);
int string_print(char *s);
int print_base(unsigned int n, int base);
int hexa_print(unsigned int n, char *str);
#endif
