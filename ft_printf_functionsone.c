/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iogul <iogul@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 14:50:15 by iogul             #+#    #+#             */
/*   Updated: 2025/07/08 18:03:53 by iogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_pchr(int c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}

int	ft_pstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		return (6);
	}
	while (s[i])
	{
		if (write(1, &s[i], 1) == -1)
			return (-1);
		i++;
	}
	return (i);
}

int	ft_pint(int n)
{
	long	nbr;
	int		count;
	int		len;

	count = 0;
	nbr = n;
	if (nbr == 0)
		return (ft_pchr('0'));
	if (nbr < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		nbr = -nbr;
		count++;
	}
	if (nbr > 9)
	{
		len = ft_pint(nbr / 10);
		if (len == -1)
			return (-1);
		count += len;
	}
	if (ft_pchr((nbr % 10) + '0') == -1)
		return (-1);
	return (count + 1);
}

int	ft_punsint(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr > 9)
	{
		len = ft_punsint(nbr / 10);
		if (len == -1)
			return (-1);
	}
	if (ft_pchr((nbr % 10) + '0') == -1)
		return (-1);
	return (len + 1);
}
