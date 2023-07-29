/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:57:57 by chenglee          #+#    #+#             */
/*   Updated: 2023/06/03 16:57:59 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

int		*strtonum(char **argv);
int		isnum(char *str);
int		arrlen(char **argv);
long	ft_atolong(char *str);
int		ft_isnum(char *str);
void	sa(int *a, int *len);
void	sb(int *b, int *len);
void	ss(int *a, int *b, int *lena, int *lenb);
void	pa(int *a, int *lena, int *b, int *lenb);
void	pb(int *a, int *lena, int *b, int *lenb);
void	ra(int *a, int *len);
void	rb(int *b, int *len);
void	rr(int *a, int *b, int *lena, int *lenb);
void	rra(int *a, int *len);
void	rrb(int *b, int *len);
void	rrr(int *a, int *b, int *lena, int *lenb);
int		err_check(char **argv, int *a, int *len);
int		check_dup(int *a, int *len);
int		check_ouflow(char **argv, int *len);
int		check_allnum(char **argv, int *len);
void	push_swap(int *a, int *b, int *lena);
void	setmin(int *a, int *len);
void	rotate(int *a, int *len, int count, char c);

#endif
