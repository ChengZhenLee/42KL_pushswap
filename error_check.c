/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:30:26 by chenglee          #+#    #+#             */
/*   Updated: 2023/06/27 17:30:27 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_err(char	**argv)
{
	int	len;
	int	res;

	len = arrlen(argv);
	res = 0;
	res += check_range(argv, len);
	res += check_allnum(argv, len);
	res += check_ouflow(argv, len);
	return (res);
}

int	check_range(char **argv, int len)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) != ft_atolong(argv[i]))
			return (1);
		i++;
	}
	return (0);
}

int	check_allnum(char **argv, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (!(ft_isnum(argv[i])))
			return (1);
		i++;
	}
	return (0);
}

int	check_ouflow(char **argv, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (ft_atoi(argv[i]) != ft_atolong(argv[i]))
			return (1);
		i++;
	}
	return (0);
}