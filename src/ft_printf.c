/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:33:56 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/23 15:39:35 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(char const *str, ...)
{
    int p_len;
    int i;
    va_list args;

    p_len = 0;
    i = 0;
    va_start(args, str);
    while(str[i])
    {
        p_len += ft_printchar(str[i]);
        i++;
    }
    va_end(args);
    return (p_len);
}