/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:36:30 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/04 23:07:27 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*container_of_av(char **av1, int ac1)
{
	char	*all_av1;
	int		i;

	all_av1 = ft_strdup("");
	if (!all_av1)
		return (NULL);
	if (ac1 > 1)
	{
		i = 0;
		if (!av1[i + 1][0])
			return(NULL);
		while (++i < ac1)
		{
			if (av1[i][0] == '\0' || ( av1[1][0] == '-' || av1[1][0] == '+'))
			{
				if (!(av1[1][1] >= 48 && av1[1][1] <= 57))
					return (free(all_av1), NULL);
			}
			all_av1 = ft_strjoin(all_av1, av1[i]);
			if (!all_av1)
				return (free(all_av1), NULL);
		}
	}
	return (all_av1);
}

static void	option_of_sorting(t_node **a, t_node **b, int size_of_stack)
{
	if (ft_lstsize(*a) == 1)
		return ;
	else if (check_stack_sort(a))
		return ;
	else if (size_of_stack == 2)
		sort_for_tow(a);
	else if (size_of_stack == 3)
		sort_for_three(a);
	else if (size_of_stack == 4)
		sort_for_four(a, b, 4, (size_of_stack / 2));
	else if (size_of_stack == 5)
		sort_for_four(a, b, 5, (size_of_stack / 2));
	else if (size_of_stack > 5)
		sort_big_stack(a, b);
}
#include <stdio.h>
int	main(int ac, char **av)
{
	char	*all_av;
	int		*intgers;
	t_node	*stack_a;
	t_node	*stack_b;

	system("leaks push_swap");
	stack_b = NULL;
	if (ac > 1)
	{
		all_av = container_of_av(av, ac);
		if (!all_av)
			return (write(1, "Error\n", 6), 1);
		intgers = convert(&all_av, count_word(all_av));
		if (!intgers)
			return (write(1, "Error\n", 6), 1);
		stack_a = create_stack(&intgers, count_word(all_av));
		if (!stack_a)
			return (free_stack(&stack_a), 1);
		option_of_sorting(&stack_a, &stack_b, count_word(all_av));
		(free(intgers), free(all_av));
	}
	return (0);
}
