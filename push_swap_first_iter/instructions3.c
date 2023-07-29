/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:24:36 by chenglee          #+#    #+#             */
/*   Updated: 2023/06/26 16:24:38 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//	DESCRIPTION
//		Does rra and rrb at the same time
//	PARAMETERS
//		int *a: stack a
//		int *b: stack b
//		int *lena: pointer to size of a
//		int *lenb: pointer to size of b

void	rrr(int *a, int *b, int *lena, int *lenb)
{
	rra(a, lena);
	rrb(b, lenb);
}
