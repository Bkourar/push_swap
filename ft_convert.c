/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:03:58 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/04 23:06:36 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static	int	check_double(int *arr_of_number, int size)
{
	int	i;
	int	j;

	i = -1;
	while (++i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr_of_number[j] == arr_of_number[i])
				return (1);
			j++;
		}
	}
	return (0);
}

// static int	checker(char *arr)
// {
// 	int	j;

// 	j = -1;
// 	while (arr[++j])
// 	{
// 		if ((arr[j] >= 48 && arr[j] <= 57) || arr[j] == 43
// 			|| arr[j] == 45 || arr[j] == 32)
// 		{
// 			if ((arr[j] == 43 || arr[j] == 45) && arr[j + 1] != 32)
// 			{
// 				if ((arr[j - 1] >= 48 && arr[j - 1] <= 57) || arr[j + 1] == '\0')
// 					return (-1);
// 			}
// 			else if ((arr[j] == 43 || arr[j] == 45) && arr[j + 1] == 32)
// 			{
// 				if ((arr[j - 1] >= 48 && arr[j - 1] <= 57) || arr[j - 1] == 32)
// 					return (-1);
// 			}
// 			if ((arr[j + 1] == 43 || arr[j + 1] == 45) && (arr[j] == 43 || arr[j] == 45))
// 				return (-1);
// 		}
// 		else
// 			return (-1);
// 	}
// 	return (0);
// }

static int	checker(char **arr)
{
	int 		i;
	int 		j;

	i = 0;
	while (arr[i])
	{
		j = 0;
		while (arr[i][j])
		{
			if (j == 0 && (arr[i][j] == '+' || arr[i][j] == '-'))
				j++;
			if (!(48 <= arr[i][j] && arr[i][j] <= 57))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	*convert(char **schedule, int size)
{
	char	**arg_spliting;
	int		*intgers;
	int		i;

	i = -1;
	arg_spliting = ft_split(*schedule, size);
	if (!arg_spliting)
		return (free(*schedule), NULL);
	if (checker(arg_spliting))
		return (free_dynamic(arg_spliting, count_word(*arg_spliting)), free(*schedule), NULL);
	intgers = (int *)malloc(sizeof(int) * size);
	if (!intgers)
		return (free_dynamic(arg_spliting, size), NULL);
	while (++i < size)
	{
		if (ft_atoi(arg_spliting[i]) > INT_MAX
			|| ft_atoi(arg_spliting[i]) < INT_MIN)
			return (free(intgers), free_dynamic(arg_spliting, size), NULL);
		else
			intgers[i] = ft_atoi(arg_spliting[i]);
	}
	if (check_double(intgers, size) != 0)
		return (free(intgers), free_dynamic(arg_spliting, size), NULL);
	return (free_dynamic(arg_spliting, size), intgers);
}
