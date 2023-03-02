/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 14:59:51 by fbonaert          #+#    #+#             */
/*   Updated: 2022/04/12 15:42:55 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t	i;
	char	*tmp;

	tmp = (char *)ptr;
	i = 0;
	while (i < n)
	{
		tmp[i] = (unsigned char)x;
		i++;
	}
	return (ptr);
}
