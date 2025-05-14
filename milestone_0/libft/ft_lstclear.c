/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:10:24 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/14 15:22:08 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_lstclear: Deletes and frees the node specified and all its successors
	        using del, then sets the list pointer to NULL. */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_list;

	while (*lst != NULL)
	{
		temp_list = (*lst)->next;
		ft_lstdelone((*lst), del);
		*lst = temp_list;
	}
	free(*lst);
}
