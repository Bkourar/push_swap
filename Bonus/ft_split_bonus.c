/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:52:53 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/08 12:03:36 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static char	**free_dynamic1(char **argement, int count)
{
	int	i;

	i = 0;
	while (i <= count)
	{
		free(argement[i]);
		i++;
	}
	free(argement);
	return (NULL);
}

static int	strlen_word(char const *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] && str[i] == ' ')
		i++;
	while (str[i + len] && str[i + len] != ' ')
		len++;
	return (len);
}

static char	**dynamic(char const *arr, int number_word)
{
	char	**stock;
	int		x;

	if (!arr)
		return (NULL);
	x = number_word + 1;
	stock = (char **)malloc(x * sizeof(char *));
	if (!stock)
		return (NULL);
	return (stock);
}

char	**ft_split(char const *str, int number_of_word)
{
	char	**string;
	int		i;
	int		j;
	int		k;

	string = dynamic(str, number_of_word);
	if (!string)
		return (NULL);
	i = -1;
	k = 0;
	while (++i < number_of_word)
	{
		string[i] = (char *)malloc(strlen_word(str + k) + 1 * sizeof(char));
		if (!string[i])
			return (free_dynamic1(string, i));
		while (str[k] && str[k] == ' ')
			k++;
		j = 0;
		while (str[k] && str[k] != ' ')
			string[i][j++] = str[k++];
		string[i][j] = '\0';
	}
	string[i] = 0;
	return (string);
}
