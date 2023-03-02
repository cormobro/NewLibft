/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 12:29:11 by fbonaert          #+#    #+#             */
/*   Updated: 2022/06/15 15:11:57 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stddef.h>
#include <stdlib.h>
size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		size;
	char		*res;

	size = ft_strlen(s);
	if (!s)
		return (NULL);
	if (len < size)
		size = len;
	res = (char *)malloc((size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	j = (size_t)start;
	while (j < ft_strlen(s) && i < len)
	{
		res[i] = s[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>
int main()
{
	char *strsub;

	if (!(strsub = ft_substr("lorem ipsum dolor sit amet", 400, 20)))
		printf("FAUX");
	printf("%s\n", ft_substr("lorem ipsum dolor sit amet", 400, 20));
	return (0);
}*/
