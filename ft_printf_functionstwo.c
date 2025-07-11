/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functionstwo.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iogul <iogul@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 14:22:20 by iogul             #+#    #+#             */
/*   Updated: 2025/07/11 14:55:42 by iogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_phex(unsigned long num, int type)
{
	char			*base;
	int				count;
	int				temp;

	count = 0;
	if (type == 0)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (num >= 16)
	{
		temp = ft_phex(num / 16, type);
		if (temp == -1)
			return (-1);
		count += temp;
	}
	if (ft_pchr(base[num % 16]) == -1)
		return (-1);
	return (count + 1);
}

int	ft_pptr(void *ptr)
{
	int				count;
	unsigned long	address;
	int				temp;

	count = 0;
	address = (unsigned long)ptr;
	if (ptr == NULL)
		return (ft_pstr("(nil)"));
	if (ft_pstr("0x") == -1)
		return (-1);
	count += 2;
	temp = ft_phex(address, 1);
	if (temp == -1)
		return (-1);
	count += temp;
	return (count);
}
