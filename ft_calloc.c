/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 18:42:08 by fbonaert          #+#    #+#             */
/*   Updated: 2022/06/15 14:54:55 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*t;
	size_t	i;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	t = (char *)malloc(count * size * sizeof(char));
	if (!t)
		return (0);
	i = 0;
	while (i < count * size)
	{
		t[i] = 0;
		i++;
	}
	return ((void *)t);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("|%s|\n", ft_calloc(SIZE_MAX, SIZE_MAX));
	printf("|%s|", calloc(SIZE_MAX, SIZE_MAX));
	return (0);
}*/
