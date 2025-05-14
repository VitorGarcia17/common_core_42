/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:26:38 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/14 15:22:08 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_lstsize: Returns the number of nodes in the linked list. */
int	ft_lstsize(t_list *lst)
{
	t_list	*size_list;
	int		i;

	size_list = lst;
	i = 0;
	while (size_list != NULL)
	{
		i++;
		size_list = size_list->next;
	}
	return (i);
}
