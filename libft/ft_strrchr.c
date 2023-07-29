/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:08:04 by chenglee          #+#    #+#             */
/*   Updated: 2023/05/03 15:15:06 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*res;
	int				i;
	unsigned char	d;

	res = NULL;
	d = c;
	i = 0;
	while (s[i])
	{
		if (s[i] == d)
			res = (char *) &s[i];
		i++;
	}
	if (s[i] == d)
		res = (char *) &s[i];
	return (res);
}
