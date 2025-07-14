/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iogul <iogul@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 00:00:00 by iogul             #+#    #+#             */
/*   Updated: 2025/07/14 17:02:07 by iogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_pchr(int c);
int		ft_pstr(char *s);
int		ft_pint(int n);
int		ft_punsint(unsigned int nbr);
int		ft_phex(unsigned long num, int type);
int		ft_pptr(void *ptr);

#endif
