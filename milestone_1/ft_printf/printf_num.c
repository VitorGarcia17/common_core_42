/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 00:38:41 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/14 01:29:12 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_di(int n)
{
	char	*str_nbr;
	int		len_nbr;

	str_nbr = ft_itoa(n);
	ft_putstr_fd(str_nbr, 1);
	len_nbr = ft_strlen(str_nbr);
	free(str_nbr);
	return (len_nbr);
}
static void	putnbr_unsi(unsigned int n)
{
	if (n > 9)
	{
		putnbr_unsi(n / 10);
		putnbr_unsi(n % 10);
	}
	else
		ft_putchar_fd(n + '0', 1);
}

int	printf_unsi(unsigned int n)
{
	int				len_nbr;
	unsigned int	temp_nbr;
	char 			*c;

	temp_nbr = n;
	while (temp_nbr > 0)
	{
		temp_nbr = temp_nbr / 10;
		len_nbr++;
	}
	putnbr_unsi(n);
	return (len_nbr);
}