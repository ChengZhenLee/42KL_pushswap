/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 22:09:03 by chenglee          #+#    #+#             */
/*   Updated: 2023/05/24 22:09:06 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printchar(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

void	ft_printstr(char *str, int *len)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_printstr("(null)", len);
		return ;
	}
	while (str[i])
	{
		ft_printchar(str[i], len);
		i++;
	}
}
