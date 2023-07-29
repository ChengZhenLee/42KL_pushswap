/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:09:18 by chenglee          #+#    #+#             */
/*   Updated: 2023/06/26 16:09:20 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//	DESCRIPTION
//		Shift up all elements of stack a by 1.
//		The first element becomes the last one.
//	PARAMETERS
//		int *a: stack a
//		int *len: pointer to size of a

void	ra(int *a, int *len)
{
	int	size;
	int	i;
	int	temp;

	size = *len;
	i = size - 1;
	if (size <= 1)
		return ;
	temp = a[size - 1];
	while (i > 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[0] = temp;
}

//	DESCRIPTION
//		Shift up all elements of stack b by 1.
//		The first element becomes the last one.
//	PARAMETERS
//		int *b: stack b
//		int *len: pointer to size of b

void	rb(int *b, int *len)
{
	int	size;
	int	i;
	int	temp;

	size = *len;
	i = size - 1;
	if (size <= 1)
		return ;
	temp = b[size - 1];
	while (i > 0)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[0] = temp;
}


//	DESCRIPTION
//		Does ra and rb at the same time.
//	PARAMETERS
//		int *a: stack a
//		int *b: stack b
//		int *lena: pointer to size of stack a
//		int *lenb: pointer to size of stack b

void	rr(int *a, int *b, int *lena, int *lenb)
{
	ra(a, lena);
	rb(b, lenb);
}

//	DESCRIPTION
//		Shift down all elements of stack a by 1.
//		The last element becomes the first one.
//	PARAMETERS
//		int *a: stack a
//		int *len: pointer to size of a

void	rra(int *a, int *len)
{
	int	size;
	int	i;
	int	temp;

	size = *len;
	i = 1;
	if (size <= 1)
		return ;
	temp = a[size - 1];
	a[size - 1] = a[0];
	while (i < size - 1)
	{
		a[i - 1] = a[i];
		i++;
	}
	a[i - 1] = temp;
}

//	DESCRIPTION
//		Shift down all elements of stack b by 1.
//		The last element becomes the first one.
//	PARAMETERS
//		int *a: stack b
//		int *len: pointer to size of b

void	rrb(int *b, int *len)
{
	int	size;
	int	i;
	int	temp;

	size = *len;
	i = 1;
	if (size <= 1)
		return ;
	temp = b[size - 1];
	b[size - 1] = b[0];
	while (i < size - 1)
	{
		b[i - 1] = b[i];
		i++;
	}
	b[i - 1] = temp;
}