/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:44:32 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/13 12:06:40 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* ft_calloc: Allocates memory for an array of nmemb elements of size bytes
			  and initializes them to zero. */
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*memory;

	if (nmemb == 0 || size == 0)
		total_size = 0;
	else
	{
		if (nmemb > SIZE_MAX / size)
			return (NULL);
		total_size = nmemb * size;
	}
	memory = malloc(total_size);
	if (!memory)
		return (NULL);
	ft_bzero(memory, total_size);
	return (memory);
}
