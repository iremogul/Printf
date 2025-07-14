/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iogul <iogul@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:37:51 by iogul             #+#    #+#             */
/*   Updated: 2025/07/14 20:38:28 by iogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	handle_format(va_list args, char frmt, int *temp)
{
	if (frmt == 'c')
		*temp += ft_pchr(va_arg(args, int));
	else if (frmt == 's')
		*temp += ft_pstr(va_arg(args, char *));
	else if (frmt == 'd' || frmt == 'i')
		*temp += ft_pint(va_arg(args, int));
	else if (frmt == 'u')
		*temp += ft_punsint(va_arg(args, unsigned int));
	else if (frmt == 'p')
		*temp += ft_pptr(va_arg(args, void *));
	else if (frmt == 'x')
		*temp += ft_phex(va_arg(args, unsigned int), 1);
	else if (frmt == 'X')
		*temp += ft_phex(va_arg(args, unsigned int), 0);
	else if (frmt == '%')
		*temp += ft_pchr(frmt);
	else
		return (-1);
	return (1);
}

int	format_parser(const char *format, int *count, va_list args)
{
	int	i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			if (format[i])
				if (handle_format(args, format[i], count) == -1)
					return (-1);
		}
		else
		{
			if (ft_pchr(format[i]) == -1)
				return (-1);
			*count += 1;
		}
		i++;
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	if (format_parser(format, &count, args) == -1)
		return (-1);
	va_end(args);
	return (count);
}
