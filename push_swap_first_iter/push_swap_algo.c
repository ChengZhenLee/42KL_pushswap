/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:16:30 by chenglee          #+#    #+#             */
/*   Updated: 2023/06/26 17:16:31 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//	DESCRIPTION
//		Sorts the numbers in stack a
//	PARAMETERS
//		int *a: stack a
//		int *b: stack b
//		int *len: pointer to the size of a

void	push_swap(int *a, int *b, int *lena)
{
	int lenb;

	lenb = 0;
	while (a[0])
	{
		setmin(a, lena);
		pb(a, lena, b, &lenb);
		// ft_printf("pb\n");
	}
	while (b[0])
	{
		pa(a, lena, b, &lenb);
		// ft_printf("pa\n");
	}
}

//	DESCRIPTION
//		Finds the minimum value element in stack a
//		Uses minimum number of rotations and rotates the 
//		min number to the top of stack a
//	PARAMETERS
//		int *a: stack a
//		int *len: pointer to size of stack a

void	setmin(int *a, int *len)
{
	int	i;
	int	min;
	int	minind;
	int	size;

	i = 0;
	minind = 0;
	size = *len;
	min = 2147483647;
	while (a[i])
	{
		if (a[i] < min)
		{
			minind = i;
			min = a[i];
		}
		i++;
	}
	if (minind >= size / 2)
		rotate(a, len, size - (minind + 1), 'u');
	else if (minind < size / 2)
		rotate(a, len, minind + 1, 'd');
}

//	DESCRIPTION
//		rotates stack a up or down a set number
//		of times
//	PARAMETERS
//		int *a: stack a
//		int *len: pointer to size of stack a
//		int count: the number of rotations
//		char c: flag to determine if rotate up or down

void	rotate(int *a, int *len, int count, char c)
{
	if (c == 'u')
	{
		while (count > 0)
		{
			ra(a, len);
			// ft_printf("ra\n");
			count--;
		}
	}
	else if (c == 'd')
	{
		while (count > 0)
		{
			rra(a, len);
			// ft_printf("rra\n");
			count--;
		}
	}
}