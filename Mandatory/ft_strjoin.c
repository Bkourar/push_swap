/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:37:23 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/07 05:19:12 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(char const *src)
{
	char	*destion;
	int		i;
	int		j;

	i = 0;
	j = 0;
	destion = (char *)malloc(ft_strlen(src) + 1);
	if (!destion)
		return (NULL);
	while (src[i])
		destion[j++] = src[i++];
	destion[j] = '\0';
	return (destion);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	int		i;
	int		j;

	j = 0;
	if (!s1 && !s2)
		return (string = NULL, NULL);
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	string = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 2);
	if (!string)
		return (free((char *)s1), NULL);
	i = 0;
	while (s1[i])
		string[j++] = s1[i++];
	string[j++] = ' ';
	i = 0;
	while (s2[i])
		string[j++] = s2[i++];
	string[j] = '\0';
	return (free((char *)s1), string);
}
