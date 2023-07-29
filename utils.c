/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:32:46 by chenglee          #+#    #+#             */
/*   Updated: 2023/06/27 17:32:47 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	isnum(char *str)
{
	while (*str)
	{
		if (*str == '-' || *str == '+')
			str++;
		if (!(ft_isdigit(*str)))
			return (0);
		str++;
	}
	return (1);
}

int	arrlen(char **argv)
{
	int	res;

	res = 0;
	while (argv[res])
		res++;
	return (res);
}

long	ft_atolong(char *str)
{
	int		i;
	long	res;
	int		neg;

	i = 0;
	res = 0;
	neg = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		neg = 44 - str[i++];
	while (ft_isdigit(str[i]))
		res = res * 10 + ((str[i++] - 48) * neg);
	return (res);
}

int	ft_isnum(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 || (str[i] >=9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
		i++;
	if (str[i])
		return (0);
	return (1);
}