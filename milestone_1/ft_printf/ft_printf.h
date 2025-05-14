/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:45:52 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/14 19:32:42 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *, ...);
int	printf_char(char c);
int	printf_str(char *s);
int	printf_di(int n);
int	printf_unsi(unsigned int n);
int	printf_hexl(int n);
int	printf_hexu(int n);


#endif
