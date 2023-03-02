/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 16:26:35 by fbonaert          #+#    #+#             */
/*   Updated: 2022/04/12 15:42:41 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*source;

	dst = (unsigned char *)dest;
	source = (unsigned char *)src;
	i = n;
	if (dest > src)
	{
		while (i > 0)
		{
			dst[i - 1] = source[i - 1];
			i--;
		}
	}
	else if (src > dest)
		ft_memcpy(dest, src, n);
	return (dest);
}
