/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules_a_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:53:25 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/04 13:51:59 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	 pa(t_node **lsta, t_node **lstb, int fd)
{
	t_node	*temp;
	t_node	*head;

	if (!lsta || !(*lsta) || !lstb || !(*lstb))
		return ;
	head = (*lstb)->next;
	temp = (*lstb);
	temp->next = (*lsta);
	(*lsta) = temp;
	(*lstb) = head;
	config_postion(lsta);
	config_postion(lstb);
	if (fd == 1)
		write(1, "pa\n", 3);
}

void	 sa(t_node **lst, int fd)
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
		write(1, "sa\n", 3);
}

void	ra(t_node **lst, int fd)
{
	t_node	*temp;
	t_node	*swp;

	if (!lst || !(*lst) || !(*lst)->next)
	{
		return ;
	}
	swp = (*lst);
	(*lst) = (*lst)->next;
	temp = (*lst);
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = swp;
	swp->next = NULL;
	config_postion(lst);
	if (fd == 1)
		write(1, "ra\n", 3);
}

void	 rra(t_node **lst, int fd)
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
		write(1, "rra\n", 4);
}
