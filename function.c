#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed numbers.
*/

int _printf(const char *format, ...)
{
va_list args;
int count = 0;
va_start(args, format);
while (*format != '\0')
{
if (*format == '%')
{
format++;
if (*format == 'd' || *format == 'i')
{
int value = va_arg(args, int);
count += printf("%d", value);
}
}
else
{
putchar(*format);
count++;
}
format++;
}
va_end(args);

return (count);
}
