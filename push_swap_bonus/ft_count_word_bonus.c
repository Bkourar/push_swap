/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:57:52 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/03 22:19:05 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
