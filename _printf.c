#include "main.h"

/**
 * find_function - determines the type of format passed
 * @format: function
 * Return: Null
 */
int (*find_function(const char *format))(va_list)
{

	code_f find_f[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"b", print_bin},
		 {"u", print_unsig},
		 {"o", print_octal},
		 {"x", print_x},
		 {"X", print_X},
		/*{"r", print_rev},*/
		/*{"R", print_rot13},*/
		{NULL, NULL}
	};
int i = 0;
	while (find_f[i].sc)
	{
		if (find_f[i].sc[0] == (*format))
			return (find_f[i].f);
		i++;
	}
	return (NULL);
}

/**
 * _printf - prints formated statement
 * @format: format to be printed
 * Return: size
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int (*f)(va_list);
	unsigned int i = 0, cprint = 0;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			cprint++;
			i++;
		}
		if (format[i] == '\0')
			return (cprint);
		f = find_function(&format[i + 1]);
		if (f != NULL)
		{
			cprint += f(ap);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		cprint++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(ap);
	return (cprint);
}
