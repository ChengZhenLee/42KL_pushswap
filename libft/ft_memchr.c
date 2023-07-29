/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:07:27 by chenglee          #+#    #+#             */
/*   Updated: 2023/05/03 15:04:14 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p;
	unsigned char		d;

	p = s;
	d = c;
	i = 0;
	while (i < n)
	{
		if (p[i] == d)
			return ((void *) &p[i]);
		i++;
	}
	return (NULL);
}
