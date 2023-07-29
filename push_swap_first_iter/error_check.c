/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:25:02 by chenglee          #+#    #+#             */
/*   Updated: 2023/06/26 17:25:03 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//	DESCRIPTION
//		Checks if the input to push_swap is valid
//	PARAMETER
//		char **argv: an array of strings inputted into push_swap
//		int *a: stack a
//		int *len: pointer to size of a
//	RETURN VALUE
//		0 if there are no errors and a positive integer
//		if errors exist

int	err_check(char **argv, int *a, int *len)
{
	int res;

	res = 0;
	res += check_dup(a, len);
	res += check_ouflow(argv, len);
	res += check_allnum(argv, len);
	return (res);
}

//	DESCRIPTION
//		Checks for duplicate numbers in the stack
//	PARAMETER
//		int *a: stack a
//		int *len: pointer to size of a
//	RETURN VALUE
//		0 if there are no duplicate numbers,
//		1 if otherwise

int	check_dup(int *a, int *len)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = *len;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (a[j] == a[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

//	DESCRIPTION
//		Checks if all strings in the array are within the range
//		of integers
//	PARAMETER
//		char **argv: the array of strings
//		int *len: pointer to the size of the array
//	RETURN VALUE
//		0 if all strings are within the size of integer,
//		1 if otherwise

int	check_ouflow(char **argv, int *len)
{
	int	size;
	int	i;

	i = 0;
	size = *len;
	while (i < size)
	{
		if (ft_atoi(argv[i]) != ft_atolong(argv[i]))
			return (1);
		i++;
	}
	return (0);
}

//	DESCRIPTION
//		Checks if all the strings in the array are valid numbers
//	PARAMETER
//		char **argv: the array of strings
//		int *len: pointer to the size of the array
//	RETURN VALUE
//		0 if all strings are valid numbers, 1 if otherwise

int	check_allnum(char **argv, int *len)
{
	int	size;
	int	i;

	i = 0;
	size = *len;
	while (i < size)
	{
		if (!(ft_isnum(argv[i])))
			return (1);
		i++;
	}
	return (0);
}