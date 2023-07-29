/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:08:35 by chenglee          #+#    #+#             */
/*   Updated: 2023/05/17 16:08:39 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	total_size;

	if (nmemb == 0 || size == 0)
		return (ft_strdup(""));
	total_size = nmemb * size;
	if (total_size < nmemb || total_size < size)
		return (NULL);
	res = malloc(total_size);
	if (!res)
		return (NULL);
	while (total_size--)
		((char *)res)[total_size] = 0;
	return (res);
}
