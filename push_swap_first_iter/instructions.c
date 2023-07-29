/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:05:36 by chenglee          #+#    #+#             */
/*   Updated: 2023/06/26 16:05:37 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//	DESCRIPTION
//		Swap the first 2 elements at the top of stack a
//	PARAMETERS
//		int *a: stack a
//		int *len: pointer to size of stack a

void	sa(int *a, int *len)
{
	int size = *len;
	int	temp;

	if (size <= 1)
		return ;
	temp = a[size - 1];
	a[size - 1] = a[size - 2];
	a[size - 2] = temp;
}

//	DESCRIPTION
//		Swap the first 2 elements at the top of stack b
//	PARAMETERS
//		int *b: stack b
//		int *len: pointer to size of stack b

void	sb(int *b, int *len)
{
	int size = *len;
	int	temp;

	if (size <= 1)
		return ;
	temp = b[size - 1];
	b[size - 1] = b[size - 2];
	b[size - 2] = temp;
}

//	DESCRIPTION
//		Does sa and sb at the same time
//	PARAMETERS
//		int *a: stack a
//		int *b: stack b
//		int *lena: pointer to size of stack a
//		int *lenb: pointer to size of stack b

void	ss(int *a, int *b, int *lena, int *lenb)
{
	sa(a, lena);
	sb(b, lenb);
}

//	DESCRIPTION
//		Take the first element at the top of b and 
//		put it at the top of a.
//		Do nothing if b is empty
//	PARAMETERS
//		int *a: stack a
//		int *b: stack b
//		int *lena: pointer to size of stack a
//		int *lenb: pointer to size of stack b

void	pa(int *a, int *lena, int *b, int *lenb)
{
	int	sizea;
	int	sizeb;

	sizea = *lena;
	sizeb = *lenb;
	if (sizeb == 0)
		return ;
	a[sizea] = b[sizeb - 1];
	b[sizeb - 1] = 0;
	sizeb--;
	sizea++;
	*lenb = sizeb;
	*lena = sizea;
}

//	DESCRIPTION
//		Take the first element at the top of a and 
//		put it at the top of b.
//		Do nothing if a is empty
//	PARAMETERS
//		int *a: stack a
//		int *b: stack b
//		int *lena: pointer to size of stack a
//		int *lenb: pointer to size of stack b

void	pb(int *a, int *lena, int *b, int *lenb)
{
	int	sizea;
	int	sizeb;

	sizea = *lena;
	sizeb = *lenb;
	if (sizea == 0)
		return ;
	b[sizeb] = a[sizea - 1];
	a[sizea - 1] = 0;
	sizea--;
	sizeb++;
	*lenb = sizeb;
	*lena = sizea;
}