/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack_of_tow.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 08:29:48 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/03 16:07:47 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_for_tow(t_node **a)
{
	t_node	*temp;

	temp = (*a)->next;
	if (temp->data < (*a)->data)
		sa(a, 1);
}
