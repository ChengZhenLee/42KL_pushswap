/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:40:12 by chenglee          #+#    #+#             */
/*   Updated: 2023/05/03 16:19:30 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	charcmp(char c1, char const *set)
{
	while (*set)
	{
		if (c1 == *set)
			return (1);
		set++;
	}
	return (0);
}

int	getlen(char const *s1, char const *set)
{
	int	len;
	int	i;
	int	res;

	res = 0;
	len = ft_strlen(s1);
	i = 0;
	while (charcmp(s1[i], set) && i < len)
		i++;
	res = i;
	if (i == len)
		return (0);
	i = len - 1;
	while (charcmp(s1[i], set))
	{
		res++;
		i--;
	}
	res = len - res;
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*res;
	int		i;
	int		temp;

	len = getlen(s1, set);
	res = malloc(sizeof(char) * (len + 1));
	if (!res || !s1)
		return (NULL);
	i = 0;
	while (charcmp(s1[i], set))
		i++;
	temp = i;
	while (i - temp < len)
	{
		res[i - temp] = s1[i];
		i++;
	}
	res[i - temp] = '\0';
	return (res);
}
