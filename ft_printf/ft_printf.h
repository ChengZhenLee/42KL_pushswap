/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:18:40 by chenglee          #+#    #+#             */
/*   Updated: 2023/05/24 16:18:43 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *s, ...);
void	ft_printnum(int num, int *len);
void	ft_printunsigned_num(unsigned int num, int *len);
void	ft_printhex(long unsigned int num, int *len, const char *base);
void	ft_printpoint(void *ptr, int *len);
void	ft_printchar(char c, int *len);
void	ft_printstr(char *str, int *len);

#endif