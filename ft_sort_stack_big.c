/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack_big.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 18:47:19 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/03 18:47:28 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_revers_stack(t_node **a, t_node **b, int big)
{
	int po;

	while (ft_lstsize(*b) != 0)
	{
		po = search_pos(b, ft_lstsize(*b), ((*a)->index - 1));
		if ((*b)->index == (*a)->index - 1)
            pa(a, b, 1);
		else if (ft_lstlast(*a)->index == big)
            (pa(a, b, 1), ra(a, 1));
        else if (ft_lstlast(*a)->index < (*b)->index)
            (pa(a, b, 1), ra(a, 1));
     	else if (ft_lstlast(*a)->index < ft_lstlast(*b)->index)
        	(rrb(b, 1), pa(a, b, 1), ra(a, 1));
     	else if (ft_lstlast(*a)->index == (*a)->index - 1)
     		rra(a, 1);
		else if (po < ft_lstsize(*b) / 2)
			rb(b, 1);
		else
			rrb(b, 1);
	}
	while (ft_lstlast(*a)->index != big)
    	rra(a, 1);

}

void	sort_big_stack(t_node **sa, t_node **sb)
{
	int	op1;
	int	op2;
	int	x;

	op2 = 0;
	while ((*sa) && ft_lstsize(*sa) > 3)
	{
		op1 = (ft_lstsize(*sa) / 6 + op2);
		op2 = (ft_lstsize(*sa) / 3 + op2);
		while (ft_lstsize(*sb) < op2)
		{
			if ((*sa)->index < op2)
			{
				pb(sa, sb, 1);
				if ((*sb)->index < op1 && ft_lstsize(*sb) > 1)
					rb(sb, 1);
			}
			else
				ra(sa, 1);
		}
	}
	if (check_stack_sort(sa) == 0)
		sort_for_three(sa);
	x = ft_lstlast(*sa)->index;
	sort_revers_stack(sa, sb, x);
}