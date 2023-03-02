/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 16:51:23 by fbonaert          #+#    #+#             */
/*   Updated: 2022/04/26 14:24:02 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*tmp;
	size_t	i;

	if (n <= 0 || !s)
		return (0);
	i = 0;
	tmp = (char *)s;
	if (c > 256)
		c = c - 256;
	while (i < n)
	{
		if (tmp[i] == c)
			return (&tmp[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char s[] = {0, 1, 2, 3, 4, 5};
	printf("%s\n", ft_memchr(s, 2 + 256, 3));
	printf("%s\n", memchr(s, 2 + 256, 3));
	return (0);
}
*/
