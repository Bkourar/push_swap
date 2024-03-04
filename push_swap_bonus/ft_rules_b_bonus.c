/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules_b_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:54:02 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/04 07:54:27 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	 pb(t_node **lsta, t_node **lstb, int fd)
{
	t_node	*temp;

	if (!lsta || !(*lsta) || !lstb || !(*lstb))
		return ;
	temp = (*lsta);
	(*lsta) = (*lsta)->next;
	temp->next = (*lstb);
	(*lstb) = temp;
	config_postion(lsta);
	config_postion(lstb);
	if (fd == 1)
		write(1, "pb\n", 3);
}

void	 sb(t_node **lst, int fd)
{
	t_node	*temp;

	if (!lst || !(*lst) || !(*lst)->next)
		return ;
	temp = (*lst);
	(*lst) = (*lst)->next;
	(temp)->next = (*lst)->next;
	(*lst)->next = temp;
	config_postion(lst);
	if (fd == 1)
		write(1, "sb\n", 3);
}

void	rb(t_node **lst, int fd)
{
	t_node	*temp;
	t_node	*swp;

	if (!lst || !(*lst) || !(*lst)->next)
		return ;
	swp = (*lst);
	(*lst) = (*lst)->next;
	temp = (*lst);
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = swp;
	swp->next = NULL;
	config_postion(lst);
	if (fd == 1)
		write(1, "rb\n", 3);
}

void	 rrb(t_node **lst, int fd)
{
	t_node	*temp;
	t_node	*swp;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	temp = (*lst);
	while (temp->next->next != NULL)
		temp = temp->next;
	swp = temp;
	temp = temp->next;
	temp->next = (*lst);
	(*lst) = temp;
	swp->next = NULL;
	config_postion(lst);
	if (fd == 1)
		write(1, "rrb\n", 4);
}
