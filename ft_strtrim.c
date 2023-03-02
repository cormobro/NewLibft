/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 14:25:01 by fbonaert          #+#    #+#             */
/*   Updated: 2022/04/12 16:20:15 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char const *set, char c)
{
	int	i;

	if (!set)
		return (0);
	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	set_k(int i, int j)
{
	int	k;

	if (j >= i)
		k = j - i + 2;
	else
		k = 1;
	return (k);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*res;

	if (!s1)
		return (0);
	i = 0;
	while (is_in_set(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (j >= 0 && is_in_set(set, s1[j]))
		j--;
	k = set_k(i, j);
	res = (char *)malloc(k * sizeof(char));
	if (!res)
		return (0);
	k = 0;
	while (s1[i + k] && i + k < j + 1)
	{
		res[k] = s1[i + k];
		k++;
	}
	res[k] = '\0';
	return (res);
}
