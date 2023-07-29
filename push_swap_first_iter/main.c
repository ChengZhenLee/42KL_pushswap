/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:55:21 by chenglee          #+#    #+#             */
/*   Updated: 2023/06/03 16:55:22 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>

int	main(int argc, char **argv)
{
	int	*a;
	int	len;
	int	*b;

	if (argc < 2)
		return (1);
	argv++;
	a = strtonum(argv);
	len = arrlen(argv);
	if (!a || err_check(argv, a, &len) > 0)
	{
		free(a);
		fprintf(stderr, "Error\n");
		// ft_printf("Error\n");
		return (3);
	}
	b = malloc(sizeof(int) * (len + 1));
	if (!b)
		return (4);
	push_swap(a, b, &len);
	
	// // test
	// int i = 0;
	// while (a[i])
	// 	ft_printf("%d\t", a[i++]);
}
