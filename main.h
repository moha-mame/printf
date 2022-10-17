#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_d(va_list d);
int print_i(va_list i);
int print_bin(va_list b);
int print_rev(va_list r);
int print_unsig(va_list u);
int print_octal(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_S(va_list S);
int print_rev(va_list r);
int print_p(va_list p);
int print_rot13(va_list R);
char *itoa(long int, int);
int is_digit(char);
int print_width(const char *format, int *i, va_list w);
/**
  * struct code_format - Struct format
  *
  * @sc: The specifiers
  * @f: The function associated
  */
typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;
#endif
