/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iogul <iogul@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:37:51 by iogul             #+#    #+#             */
/*   Updated: 2025/07/05 14:39:52 by iogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
static int handle_format(va_list args, char *frmt)
{
    if (*frmt == 'c')
        return(ft_pchr(va_arg(args, int)));
    else if(*frmt == 's')
        return(ft_pstr(va_arg(args, char*)));
    else if(*frmt == 'd'|| *frmt=='i')
        return(ft_pint(va_arg(args, int*)));
    else if(*frmt == 'u')
        return(ft_punsint(va_arg(args, unsigned int*)));
    else if(*frmt == 'p')
        return(ft_pptr(va_arg(args, void*)));
    else if(*frmt == 'x')
        return(ft_phex(va_arg(args, unsigned int), 1));
    else if(*frmt == 'X')
        return(ft_phex(va_arg(args, unsigned int), 0));
    else if(*frmt == '%')
        return(ft_pchr(*frmt));
    else
        return (0);
    
}

int ft_printf(const char* format, ...)
{
    va_list args;
    int i = 0;
    if (!frmt || frmt[i]== '%' && frmt[i+1] == '\0')
        return(va_end(args), -1);
        
    while (format[i])
    {
        
        {
            handle_format()
        }
        
        i++
    }
    
    
}printf("benim ismim:%s","irem")