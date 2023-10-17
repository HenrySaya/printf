#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_format(char specifier, va_list ap);
int print_char(int c);
int print_string(char *str);
int print_binary(unsigned int num);

#endif
