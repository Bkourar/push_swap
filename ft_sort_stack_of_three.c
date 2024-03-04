/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack_of_three.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 20:32:29 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/03 20:41:20 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_stack_sort(t_node **stack_is_sort)
{
	t_node	*head;
	t_node	*temp;

	head = (*stack_is_sort);
	temp = (*stack_is_sort)->next;
	while (temp != NULL)
	{
		if (head->data > temp->data)
			return (0);
		head = head->next;
		temp = temp->next;
	}
	return (1);
}

void	sort_for_three(t_node **a)
{
	t_node	*tp;

	tp = (*a)->next;
	if ((*a)->data > tp->next->data && (*a)->next->data < tp->next->data)
		ra(a, 1);
	else if ((*a)->data < tp->next->data && tp->next->data < tp->data)
		(sa(a, 1), ra(a, 1));
	else if ((*a)->data > tp->data && (*a)->data < tp->next->data)
		sa(a, 1);
	else if ((*a)->data < tp->data && (*a)->data > tp->next->data)
		 rra(a, 1);
	else if ((*a)->data > tp->data && tp->data > tp->next->data)
		(sa(a, 1),  rra(a, 1));
	if (check_stack_sort(a) == 1)
		return ;
}
