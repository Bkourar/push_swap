/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_Dynamic.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:06:20 by bikourar          #+#    #+#             */
/*   Updated: 2024/02/14 11:21:07 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_dynamic(char **argement, int count)
{
	int	i;

	i = 0;
	while (i <= count)
	{
		free(argement[i]);
		i++;
	}
	free(argement);
}
