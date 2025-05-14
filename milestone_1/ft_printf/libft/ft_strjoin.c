/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:14:03 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/14 15:22:08 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_strjoin: Concatenates strings s1 and s2 into a new string. */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem_temp;
	int		i;
	int		j;

	mem_temp = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!mem_temp)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		mem_temp[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		mem_temp[i + j] = s2[j];
		j++;
	}
	mem_temp[i + j] = '\0';
	return (mem_temp);
}
