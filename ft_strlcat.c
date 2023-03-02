/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 18:06:43 by fbonaert          #+#    #+#             */
/*   Updated: 2022/04/26 16:30:35 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	int		len;

	if (!dest || !src)
		return (ft_strlen(dest) + ft_strlen(src));
	len = ft_strlen(dest);
	if (size == 0)
		return (ft_strlen(src));
	if ((int)size < 0)
		size = len + ft_strlen(src) + 1;
	i = 0;
	if (len + i < size - 1 && src[i])
	{
		while (len + i < size - 1 && src[i])
		{
			dest[len + i] = src[i];
			i++;
		}
		dest[len + i] = '\0';
	}
	if ((int)size > len)
		size = (size_t)len;
	return (size + ft_strlen(src));
}
/*
#include <stdio.h>
int main()
{
	char *dest = "rrrrrrrrrrrrrrr";
	printf("%zu\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
	return (0);
}*/
