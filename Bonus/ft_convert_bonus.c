/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:57:59 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/08 11:57:45 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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

static int	checker(char **arr)
{
	int	i;
	int	j;

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
	char	**t_s;
	int		*intgers;
	int		i;

	i = -1;
	t_s = ft_split(*schedule, size);
	if (!t_s)
		return (free(*schedule), NULL);
	if (checker(t_s))
		return (free_dynamic(t_s, size), free(*schedule), NULL);
	intgers = (int *)malloc(sizeof(int) * size);
	if (!intgers)
		return (free_dynamic(t_s, size), NULL);
	while (++i < size)
	{
		if (ft_atoi(t_s[i]) > INT_MAX
			|| ft_atoi(t_s[i]) < INT_MIN)
			return (free(intgers), free_dynamic(t_s, size), NULL);
		else
			intgers[i] = ft_atoi(t_s[i]);
	}
	if (check_double(intgers, size) != 0)
		return (free(intgers), free_dynamic(t_s, size), NULL);
	return (free_dynamic(t_s, size), intgers);
}
