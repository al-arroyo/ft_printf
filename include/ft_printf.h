#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int ft_printf(char const *str, ...);
int ft_value(va_list args, char const v);
int ft_printchar (char c);

#endif