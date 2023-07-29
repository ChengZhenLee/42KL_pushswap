/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:26:19 by chenglee          #+#    #+#             */
/*   Updated: 2023/04/28 15:29:04 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	put;

	if (n < 10 && n > -10)
	{
		if (n < 0)
		{
			n *= -1;
			ft_putchar_fd('-', fd);
		}
		ft_putchar_fd(n + 48, fd);
		return ;
	}
	put = n % 10;
	if (put < 0)
		put *= -1;
	ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(put + 48, fd);
}
