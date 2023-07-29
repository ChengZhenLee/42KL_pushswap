/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:42:37 by chenglee          #+#    #+#             */
/*   Updated: 2023/05/03 20:06:31 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*cur;

	cur = *lst;
	while (cur)
	{
		temp = cur->next;
		(*del)(cur->content);
		free(cur);
		cur = temp;
	}
	*lst = NULL;
}
