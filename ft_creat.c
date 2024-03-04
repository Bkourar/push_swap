/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 03:39:54 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/03 13:02:27 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_indexing(t_node **stack)
{
	t_node	*head;
	t_node	*temp;
	int		val;

	head = (*stack);
	while (head)
	{
		val = head->data;
		temp = head->next;
		while (temp)
		{
			if (val < temp->data)
				temp->index++;
			else
				head->index++;
			temp = temp->next;
		}
		head = head->next;
	}
}

static t_node	*ft_creat_stack(t_node *stack, int ar, int position)
{
	t_node	*temp;

	temp = (t_node *)malloc(sizeof(t_node));
	if (!temp)
		return (NULL);
	temp->data = ar;
	temp->index = 0;
	temp->pos = position;
	temp->next = stack;
	return (stack = temp, stack);
}

t_node	*create_stack(int **arg_intger, int size)
{
	t_node	*stacka;
	int		*number;

	number = *arg_intger;
	stacka = NULL;
	while (--size >= 0)
	{
		stacka = ft_creat_stack(stacka, number[size], size);
		if (!stacka)
			return (free_stack(&stacka), free(*arg_intger), NULL);
	}
	ft_indexing(&stacka);
	return (stacka);
}
