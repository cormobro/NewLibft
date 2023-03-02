/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 17:41:26 by fbonaert          #+#    #+#             */
/*   Updated: 2022/06/13 16:21:17 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(const char i)
{
	if (i < 0)
		return (-i);
	return (i);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	if ((!s1 && !s2) || n <= 0)
		return (0);
	else if (!s1)
		return (-s2[0]);
	else if (!s2)
		return (s1[0]);
	len = 0;
	while (len < n - 1 && s1[len] && s2[len])
	{
		if (s1[len] != s2[len])
			return ((unsigned char)(s1[len]) - (unsigned char)(s2[len]));
		len++;
	}
	return (ft_abs(s1[len]) - ft_abs(s2[len]));
}
