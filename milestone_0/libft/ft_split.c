/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:17:18 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/14 15:22:08 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Counts the number of words in s separated by delimiter c. */
static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

/* Extracts the next word from 's' (skipping delimiters 'c')
	and updates 'j'. */
static char	*create_words(const char *s, char c, size_t *j)
{
	size_t	start;
	size_t	end;
	char	*str;

	start = *j;
	while (s[start] == c)
		start++;
	end = start;
	while (s[end] && s[end] != c)
		end++;
	if (end > start)
		str = ft_substr(s, start, end - start);
	else
		str = NULL;
	*j = end + 1;
	return (str);
}

/* Frees an array of strings and its elements. */
static void	free_arr(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

/* ft_split: Splits a string s into an array of strings
			 separated by delimiter c. */
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**arr;
	size_t	total_words;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	total_words = count_words(s, c);
	arr = (char **) malloc((total_words + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (i < total_words)
	{
		arr[i] = create_words(s, c, &j);
		if (!arr[i])
		{
			free_arr(arr);
			return (NULL);
		}
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
