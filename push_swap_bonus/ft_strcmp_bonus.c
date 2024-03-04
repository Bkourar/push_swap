/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 21:01:43 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/03 22:20:58 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	s;
	unsigned char	d;
	size_t			i;

	i = 0;
	if ((s1 || s2) == 0)
		return (1);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (s1[i] != s2[i])
	{
		s = (unsigned char)s1[i];
		d = (unsigned char)s2[i];
		return (s - d);
	}
	return (0);
}