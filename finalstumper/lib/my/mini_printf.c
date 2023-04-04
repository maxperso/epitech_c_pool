/*
** EPITECH PROJECT, 2022
** mini_printf
** File description:
** mini_printf with %d, %i, %c, %s, %% flags
*/

#include <stdarg.h>

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
static int found_flags(int i, char const *format);
static void printf_flags(int i, char const *str, va_list list);

int mini_printf(const char *format, ...)
{
    va_list list;

    va_start(list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (found_flags(i, format) == 1) {
            printf_flags(i, format, list);
            i++;
        } else
            my_putchar(format[i]);
    }
    va_end(list);
    return (0);
}

static void printf_flags(int i, char const *str, va_list list)
{
    if (str[i] == '%' && str[i + 1] == 's')
        my_putstr(va_arg(list, char const *));
    if (str[i] == '%' && str[i + 1] == 'c')
        my_putchar(va_arg(list, int));
    if (str[i] == '%' && (str[i + 1] == 'd' || str[i + 1] == 'i'))
        my_put_nbr(va_arg(list, int));
    if (str[i] == '%' && str[i + 1] == '%')
        my_putchar('%');
}

static int found_flags(int i, char const *str)
{
    if (str[i] == '%' && (str[i + 1] == '%' || str[i + 1] == 'd'
    || str[i + 1] == 'i' || str[i + 1] == 'c' || str[i + 1] == 's'))
        return (1);
    if (str[i] == '%' && (str[i + 1] != '%' && str[i + 1] != 'd'
    && str[i + 1] != 'i' && str[i + 1] != 'c' && str[i + 1] != 's'))
        return (84);
    return (0);
}
