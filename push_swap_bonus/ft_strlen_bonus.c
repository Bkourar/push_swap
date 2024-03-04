/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 21:27:47 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/04 10:12:08 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

size_t	ft_strlen(const char *theString)
{
	size_t	i;

	i = 0;
	while (theString[i])
		i++;
	return (i);
}

int	ft_isdigit(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		if ((str[i + 1] == '\0') && str[i] >= '0' && str[i] <= '9')
			return (1);
		else if (!(str[i] >= '0' && str[i] <= '9'))
			break ;
		i++;
	}
	return (0);
}

void check(t_node **a, int x)
{
	if (x == 0)
		write(1, "Error\n", 6);
	else if (!check_stack_sort(a) )
        	write(1, "KO\n", 3);
    else
        	write(1, "OK\n", 3);
}
