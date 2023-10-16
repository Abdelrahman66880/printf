#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
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
if (*format == 'c')
{
int c = va_arg(args, int);
putchar(c);
count++;
}
else if (*format == 's')
{
char *str = va_arg(args, char*);
while (*str != '\0')
{
putchar(*str);
str++;
count++;
}
}
else if (*format == '%')
{
putchar('%');
count++;
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
