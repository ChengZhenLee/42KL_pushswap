/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:20:12 by chenglee          #+#    #+#             */
/*   Updated: 2023/05/03 17:20:35 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strcount(char const *s, char c)
{
	size_t	i;
	size_t	temp;
	size_t	res;

	i = 0;
	res = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] == c && i < ft_strlen(s))
			i++;
		temp = i;
		while (s[i] != c && i < ft_strlen(s))
			i++;
		if (i > temp)
			res++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char				**res;
	size_t				i;
	size_t				j;
	unsigned int		temp;

	res = malloc(sizeof(char *) * (strcount(s, c) + 1));
	if (!s || !res)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] == c && i < ft_strlen(s))
			i++;
		if (i < ft_strlen(s))
		{
			temp = i;
			while (s[i] != c && i < ft_strlen(s))
				i++;
			res[j++] = ft_substr(s, temp, i - temp);
		}
	}
	res[j] = NULL;
	return (res);
}
