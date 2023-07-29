/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 17:15:24 by chenglee          #+#    #+#             */
/*   Updated: 2023/06/03 17:15:24 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//	DESCRIPTION
//		Determines if a string is made up of at most one sign
//		and only digits
//	PARAMETERS
//		char *str: The string to be checked
//	RETURN VALUES
//		1 if the string is made up of at most one sign and 
//		only digits. 0 if not.

int	isnum(char *str)
{
	while (*str)
	{
		if (*str == '-' || *str == '+')
			str++;
		if (!(ft_isdigit(*str)))
			return (0);
		str++;
	}
	return (1);
}

//	DESCRIPTION
//		Determines the amount of elements in an array
//		of integers.
//	PARAMETERS
//		int *nums: Set of integers
//	RETURN VALUES
//		The integer value of the number of strings.

int	arrlen(char **argv)
{
	int	res;

	res = 0;
	while (argv[res])
		res++;
	return (res);
}

//	DESCRIPTION
//		Converts strings of numbers into a set of integers
//	PARAMETERS
//		char **argv: Set of strings
//	RETURN VALUES
//		A set of integers. NULL if a string is not a number

int	*strtonum(char **argv)
{
	int	*res;
	int	size;
	int	i;

	size = 0;
	while (argv[size])
		size++;
	res = malloc(sizeof(int) * size);
	if (!res)
		return (NULL);
	i = size - 1;
	while (*argv)
	{
		if (!(isnum(*argv)))
		{
			free(res);
			return (NULL);
		}
		res[i--] = ft_atoi(*argv);
		argv++;
	}
	return (res);
}

//	DESCRIPTION
//		Converts a string of numbers into a long
//	PARAMETERS
//		char *str: A string of numbers
//	RETURN VALUE
//		The long value

long	ft_atolong(char *str)
{
	int		i;
	long	res;
	int		neg;

	i = 0;
	res = 0;
	neg = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		neg = 44 - str[i++];
	while (ft_isdigit(str[i]))
		res = res * 10 + ((str[i++] - 48) * neg);
	return (res);
}

//	DESCRIPTION
//		Check if a string is a number
//	PARAMETERS
//		char *str: A string of characters
//	RETURN VALUE
//		1 if the string is a number, 0 if it isn't

int	ft_isnum(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 || (str[i] >=9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
		i++;
	if (str[i])
		return (0);
	return (1);
}