/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:32:43 by chenglee          #+#    #+#             */
/*   Updated: 2023/04/28 15:32:43 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*temp;
	t_list	*start;
	t_list	*new_node;

	start = NULL;
	while (lst)
	{
		new_node = ft_lstnew((*f)(lst->content));
		if (!new_node)
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		if (!start)
			start = new_node;
		else
			temp->next = new_node;
		temp = new_node;
		lst = lst->next;
	}
	return (start);
}
