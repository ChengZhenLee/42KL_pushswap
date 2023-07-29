/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:37:56 by chenglee          #+#    #+#             */
/*   Updated: 2023/05/24 21:37:57 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printnum(int num, int *len)
{
	int	res;

	if (num < 10 && num > -10)
	{
		if (num < 0)
		{
			num *= -1;
			ft_printchar('-', len);
		}
		ft_printchar(num + 48, len);
		return ;
	}
	res = num % 10;
	if (res < 0)
		res *= -1;
	ft_printnum(num / 10, len);
	ft_printchar(res + 48, len);
}

void	ft_printunsigned_num(unsigned int num, int *len)
{
	if (num < 10)
	{
		ft_printchar(num + 48, len);
		return ;
	}
	ft_printnum(num / 10, len);
	ft_printchar((num % 10) + 48, len);
}

void	ft_printhex(long unsigned int num, int *len, const char *base)
{
	if (num < 16)
	{
		ft_printchar(base[num], len);
		return ;
	}
	ft_printhex(num / 16, len, base);
	ft_printchar(base[num % 16], len);
}

void	ft_printpoint(void *ptr, int *len)
{
	uintptr_t	address;

	address = (uintptr_t)ptr;
	ft_printstr("0x", len);
	if (!ptr)
	{
		ft_printchar('0', len);
		return ;
	}
	ft_printhex(address, len, "0123456789abcdef");
}
