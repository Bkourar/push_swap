/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 21:27:47 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/08 12:08:15 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

size_t	ft_strlen(const char *theString)
{
	size_t	i;

	i = 0;
	while (theString[i])
		i++;
	return (i);
}

static void	run(char *str, t_node **a, t_node **b)
{
	if (!str)
		return ;
	if (!ft_strcmp(str, "pa\n"))
		pa(a, b, -1);
	else if (!ft_strcmp(str, "pb\n"))
		pb(a, b, -1);
	else if (!ft_strcmp(str, "sa\n"))
		sa(a, -1);
	else if (!ft_strcmp(str, "sb\n"))
		sb(b, -1);
	else if (!ft_strcmp(str, "ss\n"))
		ss(a, b, -1);
	else if (!ft_strcmp(str, "ra\n"))
		ra(a, -1);
	else if (!ft_strcmp(str, "rb\n"))
		rb(b, -1);
	else if (!ft_strcmp(str, "rr\n"))
		rr(a, b, -1);
	else if (!ft_strcmp(str, "rra\n"))
		rra(a, -1);
	else if (!ft_strcmp(str, "rrb\n"))
		rrb(b, -1);
	else if (!ft_strcmp(str, "rrr\n"))
		rrr(a, b, -1);
}

int	excute_option(t_list **opt, t_node **a, t_node **b)
{
	t_list	*tmp;

	if (!opt || !(*opt))
		return (1);
	tmp = (*opt);
	while (tmp != NULL)
	{
		run(tmp->content, a, b);
		tmp = tmp->next;
	}
	return (ft_lstclear(opt, free), 1);
}

int	verifier_option(char *str)
{
	if (!ft_strcmp(str, "pa\n") || !ft_strcmp(str, "pb\n"))
		return (1);
	else if (!ft_strcmp(str, "sa\n") || !ft_strcmp(str, "sb\n")
		|| !ft_strcmp(str, "ss\n"))
		return (1);
	else if (!ft_strcmp(str, "ra\n") || !ft_strcmp(str, "rb\n")
		|| !ft_strcmp(str, "rr\n"))
		return (1);
	else if (!ft_strcmp(str, "rra\n") || !ft_strcmp(str, "rrb\n")
		|| !ft_strcmp(str, "rrr\n"))
		return (1);
	return (0);
}

void	check(t_node **a, t_node **b, int x)
{
	if (x == 0)
		write(2, "Error\n", 6);
	else if ((*b) == NULL && check_stack_sort(a) == 1)
	{
		write(1, "OK\n", 3);
	}
	else
		write(1, "KO\n", 3);
}
