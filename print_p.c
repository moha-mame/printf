#include "main.h"

/**
 * print_p - Print print_pointer
 * @p: Number to print
 *
 * Return: Length of the number
 **/
int print_p(va_list p)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(p, unsigned long int), 16);

	if (!strcmp(p_buff, "0"))
		return (_printf("(nil)"));

	size = _printf("0x");

	if (!strcmp(p_buff, "-1"))
		size += _printf("ffffffffffffffff");
	else
		size += _printf(p_buff);

	return (size);
}
