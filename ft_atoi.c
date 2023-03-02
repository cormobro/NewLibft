/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:27:48 by febonaer          #+#    #+#             */
/*   Updated: 2022/04/26 14:46:38 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	if (!str)
		return (0);
	sign = 1;
	res = 0;
	i = 0;
	while (str[i] && (str[i] == ' ' || (str[i] <= 13 && str[i] >= 9)))
		i++;
	if (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (str[i] && (str[i] == '+' || str[i] == '-'))
		return (0);
	while (str[i] && str[i] <= '9' && str[i] >= '0')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	//char escape[] = {9, 10, 11, 12, 13, 0};
	printf("%d\n", ft_atoi("-+9101112130--1"));
	printf("%d\n", atoi("-+9101112130--1"));
	return (0);
}*/
