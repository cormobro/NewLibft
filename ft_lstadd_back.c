/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:20:48 by febonaer          #+#    #+#             */
/*   Updated: 2022/06/15 14:34:12 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	t_list	*ft_lstlas(t_list *lst)
{
	if (lst)
	{
		while (lst->next != NULL)
		{
			lst = lst->next;
		}
	}
	return (&*lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*t;

	if (*lst)
	{
		t = ft_lstlas(*lst);
		t->next = &*new;
	}
	else
		*lst = new;
}
