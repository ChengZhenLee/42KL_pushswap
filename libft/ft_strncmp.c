/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:08:56 by chenglee          #+#    #+#             */
/*   Updated: 2023/05/10 14:56:54 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	const char	*a;
	const char	*b;

	i = -1;
	a = s1;
	b = s2;
	while ((a[++i] || b[i]) && i < n)
	{
		if ((unsigned char)a[i] != (unsigned char)b[i])
			return ((unsigned char)a[i] - b[i]);
	}
	return (0);
}
