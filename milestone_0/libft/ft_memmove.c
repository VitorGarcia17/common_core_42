/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:49:43 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/14 15:14:23 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_memmove: Copies n bytes from src to dest,
	       handling overlapping memory properly. */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (s == NULL && d == NULL)
		return (NULL);
	if (d > s)
	{
		while (n-- > 0)
		{
			d[n] = s[n];
		}
		return (d);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
