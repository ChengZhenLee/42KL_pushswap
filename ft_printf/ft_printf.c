/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:29:57 by chenglee          #+#    #+#             */
/*   Updated: 2023/05/24 16:30:01 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check(const char c, va_list args, int *len)
{
	if (c == 'c')
		ft_printchar(va_arg(args, int), len);
	else if (c == 's')
		ft_printstr(va_arg(args, char *), len);
	else if (c == 'p')
		ft_printpoint(va_arg(args, void *), len);
	else if (c == 'd')
		ft_printnum(va_arg(args, int), len);
	else if (c == 'i')
		ft_printnum(va_arg(args, int), len);
	else if (c == 'u')
		ft_printunsigned_num(va_arg(args, int), len);
	else if (c == 'x')
		ft_printhex((unsigned)va_arg(args, int), len, "0123456789abcdef");
	else if (c == 'X')
		ft_printhex((unsigned)va_arg(args, int), len, "0123456789ABCDEF");
	else
		ft_printchar('%', len);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, s);
	len = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			check(s[i], args, &len);
		}
		else
			ft_printchar(s[i], &len);
		i++;
	}
	return (len);
}
