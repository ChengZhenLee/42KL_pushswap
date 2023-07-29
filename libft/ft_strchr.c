/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:10:23 by chenglee          #+#    #+#             */
/*   Updated: 2023/05/03 15:07:09 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	d;

	i = -1;
	d = c;
	while (s[++i])
	{
		if (s[i] == d)
			return ((char *) &s[i]);
	}
	if (s[i] == d)
		return ((char *) &s[i]);
	return (NULL);
}
