/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_Dynamic_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:56:53 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/03 22:18:57 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
