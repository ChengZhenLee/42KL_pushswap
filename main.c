/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:28:00 by chenglee          #+#    #+#             */
/*   Updated: 2023/06/27 17:28:02 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	**a;
	t_list	**b;

	if (argc < 2)
		return (1);
	argv++;
	a = fill_list(argv);
	if (!a || check_err(argv))
	{
		free_list(a);
		fprintf(stderr, "Error\n");
		return (2);
	}
	b = (t_list **)malloc(sizeof(t_list *));
	*b = NULL;
}
