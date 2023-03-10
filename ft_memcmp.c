/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 17:41:37 by fbonaert          #+#    #+#             */
/*   Updated: 2022/04/12 15:42:10 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cmpab(int i)
{
	if (i < 0)
		return (-i);
	return (i);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	if ((!a && !b) || n <= 0)
		return (0);
	else if (!a)
		return (-b[0]);
	else if (!b)
		return (a[0]);
	i = 0;
	while (i < n - 1)
	{
		if (a[i] != b[i])
			return (cmpab(a[i]) - cmpab(b[i]));
		i++;
	}
	return (cmpab(a[i]) - cmpab(b[i]));
}
