/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:01:24 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/14 15:14:48 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_strlcpy: Copies up to size - 1 characters from src to dst,
	       NUL-terminating the result if size is not 0. */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l_src;

	i = 0;
	l_src = ft_strlen(src);
	if (size == 0)
		return (l_src);
	while (src[i] != 0 && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (l_src);
}
