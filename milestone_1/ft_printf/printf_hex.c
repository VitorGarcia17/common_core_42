/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 00:38:53 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/14 20:07:37 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	printf_hexl(int n)
{
	char	*base_nbr;
	int		len_hex;

	base_nbr = "0123456879abcdef";
	len_hex = 0;
	if (n > 15)
	{
		printf_hexl(n / 16);
		printf_hexl(n % 16);
	}
	else
	{
		ft_putchar_fd(base_nbr[n], 1);
		len_hex++;
	}
	return (len_hex);
}

int	printf_hexu(int n)
{
	char	*base_nbr;
	int		len_hex;

	base_nbr = "0123456789ABCDEF";
	len_hex = 0;
	if (n > 15)
	{
		printf_hexu(n / 16);
		printf_hexu(n % 16);
	}
	else
	{
		ft_putchar_fd(base_nbr[n], 1);
		len_hex++;
	}
	return (len_hex);
}

int printf_ptr(void *ptr)
{

}