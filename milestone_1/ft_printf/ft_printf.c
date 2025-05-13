/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:42:07 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/13 17:07:02 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_prinft.h"

/* checa a string de formato para saber qual funcao de tratamento chamar */
static void	format_check()
{

}
/* imprime no terminal */
int	ft_printf(const char *format, ...)
{
	int		i;
	char	*str;

	i = 0;
	str = format;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			ft_putchar_fd(str[i], 1);
		else
		{
			switch (str[i + 1])
			{
				case 'c': printf_c(); break;
				case 's': printf_s(); break;
				case 'p': printf_p(); break;
				case 'd': printf_d(); break;
				case 'i': printf_i(); break;
				case 'u': printf_u(); break;
				case 'x': printf_x(); break;
				case 'X': printf_X(); break;
				case '%': printf_porc(str[i], &i); break;
			}
			i++;
		}
		i++;
	}
	va_list args; // Cria a variável que armazenará os argumentos variáveis.
	va_start(args, format); // Inicializa a lista com o último parâmetro nomeado.
	int num = va_arg(args, int); // Obtém o próximo argumento da pilha, do tipo int
	va_end(args); // Finaliza o uso da lista
}
