/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:42:42 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/14 15:22:08 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_lstadd_back: Adds a new node to the end of the linked list. */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back_list;

	if (!*lst)
		*lst = new;
	else
	{
		back_list = ft_lstlast(*lst);
		back_list->next = new;
	}
}
