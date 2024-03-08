/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules_mix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 12:00:56 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/07 05:27:39 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	config_postion(t_node **list)
{
	t_node	*temp;
	int		i;

	if (!list || !(*list))
		return ;
	i = 0;
	temp = (*list);
	while (temp != NULL)
	{
		temp->pos = i++;
		temp = temp->next;
	}
}

void	ss(t_node **a, t_node **b, int fd)
{
	sa(a, -1);
	sb(b, -1);
	if (fd == 1)
		write(1, "ss\n", 3);
}

void	rr(t_node **a, t_node **b, int fd)
{
	ra(a, -1);
	rb(b, -1);
	if (fd == 1)
		write(1, "rr\n", 3);
}

void	rrr(t_node **a, t_node **b, int fd)
{
	rra(a, -1);
	rrb(b, -1);
	if (fd == 1)
		write(1, "rrr\n", 4);
}
