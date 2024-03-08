/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:03:58 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/08 11:20:30 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	*convert(char **schedule, int size)
{
	char	**arg_spliting;
	int		*intgers;
	int		i;

	i = -1;
	arg_spliting = ft_split(*schedule, size);
	if (!arg_spliting)
		return (NULL);
	intgers = (int *)malloc(sizeof(int) * size);
	if (!intgers)
		return (free_dynamic(arg_spliting, size), NULL);
	while (++i < size)
	{
		if (ft_atoi(arg_spliting[i], 1) > INT_MAX
			|| ft_atoi(arg_spliting[i], 1) < INT_MIN)
			return (free(intgers), free_dynamic(arg_spliting, size), NULL);
		else
			intgers[i] = ft_atoi(arg_spliting[i], 1);
	}
	if (check_double(intgers, size) != 0)
		return (free(intgers), free_dynamic(arg_spliting, size), NULL);
	return (free_dynamic(arg_spliting, size), intgers);
}
