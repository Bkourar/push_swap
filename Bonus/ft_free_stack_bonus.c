/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:56:44 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/03 22:16:48 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	free_stack(t_node **stack)
{
	t_node	*elem;
	t_node	*tmp;

	if (stack == NULL)
		return ;
	if (*stack == NULL)
	{
		free(*stack);
		return ;
	}
	elem = *stack;
	while (elem->next != NULL)
	{
		tmp = elem->next;
		free(elem);
		elem = tmp;
	}
	free(elem);
}
