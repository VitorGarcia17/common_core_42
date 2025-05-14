/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_chars.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 00:38:08 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/14 00:46:05 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	printf_str(char *s)
{
	if (!s)
		return (printf_str("(null)"));
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}