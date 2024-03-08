/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:28:10 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/08 11:49:52 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	check_input1(char *ag_vlu)
{
	int	j;

	j = 0;
	while (ag_vlu[j] && ag_vlu[j] == 32)
		j++;
	if (ag_vlu[j] == '\0')
		return (0);
	while (ag_vlu[j])
	{
		if (!ft_isdigit(ag_vlu[j]))
		{
			if (!(ag_vlu[j] == 43 || ag_vlu[j] == 45 || ag_vlu[j] == 32))
				return (0);
		}
		else if (ft_isdigit(ag_vlu[j]))
		{
			if (ag_vlu[j + 1] == 43 || ag_vlu[j + 1] == 45)
				return (0);
		}
		j++;
	}
	return (1);
}

static int	check_input(char **ag_vlu, int ag_count)
{
	int	i;

	i = 0;
	while (++i < ag_count)
		if (!check_input1(*(ag_vlu + i)))
			return (0);
	return (1);
}

static char	*container_of_av(char **av1, int ac1)
{
	char	*all_av1;
	int		i;

	all_av1 = ft_strdup("");
	if (!check_input(av1, ac1) || !all_av1)
		return (free(all_av1), NULL);
	if (ac1 > 1)
	{
		i = 0;
		if (!av1[i + 1][0])
			return (NULL);
		while (++i < ac1)
		{
			if ((av1[i][0] == '\0') || av1[1][0] == 45 || av1[1][0] == 43)
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

static int	reading_input(t_node **a, t_node **b)
{
	char	*read;
	t_list	*command;
	t_list	*node;

	command = NULL;
	while (1)
	{
		read = get_next_line(0);
		if (!read)
			break ;
		if (verifier_option(read) == 0)
			return (0);
		node = ft_lstnew(read);
		if (!node)
			return (0);
		ft_lstadd_back(&command, node);
	}
	return (excute_option(&command, a, b));
}

int	main(int ac, char **av)
{
	char	*all_av;
	int		*intgers;
	t_node	*stack_a;
	t_node	*stack_b;

	if (ac > 1)
	{
		all_av = container_of_av(av, ac);
		if (!all_av)
			return (write(2, "Error\n", 6), 1);
		intgers = convert(&all_av, count_word(all_av));
		if (!intgers)
			return (free(all_av), write(2, "Error\n", 6), 1);
		stack_a = create_stack(&intgers, count_word(all_av));
		if (!stack_a)
			return (free_stack(&stack_a), 1);
		(free(all_av), stack_b = NULL);
		if (!reading_input(&stack_a, &stack_b))
			check(&stack_a, &stack_b, 0);
		else
			check(&stack_a, &stack_b, 1);
		(free(intgers), free_stack(&stack_b), free_stack(&stack_a));
	}
	return (0);
}
