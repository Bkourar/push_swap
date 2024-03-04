/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack_of_four.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 08:52:32 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/03 17:45:32 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	search_pos(t_node **stock1, int size, int look_index)
{
	int		i;
	t_node	*temp;

	i = 0;
	temp = (*stock1);
	while (i < size)
	{
		if (temp->index == look_index)
			return (temp->pos);
		temp = temp->next;
		i++;
	}
	return (0);
}

static void	sort_five_or_four(t_node **st1, t_node **st2)
{
	int	i;
	int	j;

	i = ft_lstsize(*st1);
	j = ft_lstsize(*st2);
	sort_for_three(st1);
	if ((i + j) == 5)
		pa(st1, st2, 1);
	pa(st1, st2, 1);
}

void	sort_for_four(t_node **a, t_node **b, int size, int middle_position)
{
	int	minmal_of_stack;
	int	k;

	k = 0;
	while (size > 3)
	{
		minmal_of_stack = search_pos(a, size, k);
		if (minmal_of_stack <= middle_position)
		{
			while ((minmal_of_stack)--)
				ra(a, 1);
		}
		else
		{
			while (size - (minmal_of_stack)++)
				rra(a, 1);
		}
		pb(a, b, 1);
		k++;
		size--;
	}
	sort_five_or_four(a, b);
}
