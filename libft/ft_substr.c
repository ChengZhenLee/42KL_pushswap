/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:25:58 by chenglee          #+#    #+#             */
/*   Updated: 2023/05/03 15:34:39 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	sub_len;
	size_t	str_len;
	char	*res;

	i = start;
	str_len = ft_strlen(s);
	sub_len = 0;
	if (start < str_len)
	{
		sub_len = str_len - start;
		if (len < sub_len)
			sub_len = len;
	}
	res = malloc(sizeof(char) * (sub_len + 1));
	if (!res)
		return (NULL);
	while (i - start < len && i < str_len)
	{
		res[i - start] = s[i];
		i++;
	}
	res[i - start] = 0;
	return (res);
}
