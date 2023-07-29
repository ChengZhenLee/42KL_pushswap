/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:08:34 by chenglee          #+#    #+#             */
/*   Updated: 2023/05/10 14:03:44 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*a;
	const unsigned char	*b;

	a = s1;
	b = s2;
	i = -1;
	if (n == 0)
		return (0);
	while (++i < n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
	}
	return (0);
}
