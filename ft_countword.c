/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:36:57 by bikourar          #+#    #+#             */
/*   Updated: 2024/02/14 09:23:25 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_word(const char *word)
{
	int	wc;
	int	i;

	wc = 0;
	i = 0;
	while (word[i])
	{
		while (word[i] && word[i] == ' ')
			i++;
		if (word[i] && word[i] != ' ')
			wc++;
		while (word[i] && word[i] != ' ')
			i++;
	}
	return (wc);
}
