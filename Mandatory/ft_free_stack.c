/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:46:08 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/06 15:22:15 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
