#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>

#define BUFF_SIZE 1024

int _printf(const char *format, ...);
int print_format(char specifier, va_list ap);
int print_percent(int specifier);
int print_char(int c);
int print_string(char *str);
int print_binary(unsigned int num);
int _putchar(char c);
int print_digit(int num);
int print_digspecial(unsigned int num, char specifier);
#endif
