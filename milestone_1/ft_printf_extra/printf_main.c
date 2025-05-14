/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:24:13 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/14 19:58:42 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf/ft_printf.h"

int main(void)
{
	int nbr;


	nbr = printf("c = %c\n", 'v');
	printf("Char Imprited: %i\n\n", nbr);
	
	nbr = ft_printf("c = %c\n", 'v');
	ft_printf("Char Imprited: %i\n\n", nbr);
	nbr = ft_printf("s = %s\n", "string");
	ft_printf("Char Imprited: %i\n\n", nbr);
	nbr = ft_printf("d = %d, i = %i\n", 123456, 123456);
	ft_printf("Char Imprited: %i\n\n", nbr);
	nbr = ft_printf("u = %u\n", 123456);
	ft_printf("Char Imprited: %i\n\n", nbr);
	nbr = ft_printf("x = %x, X = %X\n", 123456, 123456);
	ft_printf("Char Imprited: %i\n\n", nbr);
	nbr = ft_printf("%% = %%\n");
	ft_printf("Char Imprited: %i\n\n", nbr);
	return (0);
}