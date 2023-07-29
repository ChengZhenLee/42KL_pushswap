/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:25:32 by chenglee          #+#    #+#             */
/*   Updated: 2023/06/27 17:25:34 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *new_node(int data)
{
	t_list	*res;

	res = (t_list *)malloc(sizeof(t_list));
	if (!res)
		return (NULL);
	res->data = data;
	res->next = NULL;
	res->prev = NULL;
	return (res);
}

t_list	**fill_list(char **argv)
{
	int		i;
	t_list	**list;
	t_list	*p;
	t_list	*temp;

	i = 0;
	list = (t_list **)malloc(sizeof(t_list *));
	while (!a)
		return (NULL);
	p = NULL;
	while (argv[i])
	{
		temp = new_node(ft_atoi(argv[i++]));
		if (!p)
			p = temp;
		else
		{
			p->next = temp;
			temp->prev = p;
			p = temp;
		}
	}
	*list = p;
	return (a);
}

void	free_list(t_list **list)
{

}

void	add_node(t_list **list, t_list *node)
{
	t_list *temp;

	temp = *list;
	if (!temp)
		*list = node;
	while (temp->next)
		temp = temp->next;
	temp->next = node;
	node->prev = temp;
}

void	rem_node(t_list **list, t_list *node)
{

}