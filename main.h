#ifndef MAIN_H
#define MAIN_H
#define BUFF_SIZE 1024
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
  * struct code_format - code format structure
  *
  * @sc: specifies the passed format
  * @f: function passed
  */
typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;
/**
 * struct tags - these are format tags after the %
 * @flags: the flags
 */
typedef struct tags
{
	char flags[6];
} tags;

/* printf_flag_helper functions */
/* FLAGS */
#define F_MINUS 1
/*******************************************/
int get_flags(const char *format, int *i);



#endif
