/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:42:07 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/14 19:57:54 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

/* checa a string de formato para saber qual funcao de tratamento chamar */
static int	format_check(char c, va_list args)
{
	if (c == 'c')
		return (printf_char(va_arg(args, int)));
	else if (c == 's')
		return (printf_str(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (printf_di(va_arg(args, int)));
	else if (c == 'u')
		return (printf_unsi(va_arg(args, unsigned int)));
	else if (c == 'p')
		return (printf_ptr(va_arg(args, void *)));
	else if (c == 'x')
		return (printf_hexl(va_arg(args, int)));
	else if (c == 'X')
		return (printf_hexu(va_arg(args, int)));
	else if (c == '%')
		return (printf_char('%'));
	else
		return (0);
}

/* ft_printf: imprime no terminal */
int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int		len_printf;

	i = 0;
	len_printf = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			printf_char(format[i]);
			len_printf++;
		}
		else
		{
			len_printf += format_check(format[i + 1], args);
			i++;
		}
		i++;
	}
	va_end(args);
	return (len_printf);
}

// va_list args; // Cria a variável que armazenará os argumentos variáveis.
// va_start(args, format); // Inicializa a lista com o último parâmetro nomeado.
// int num = va_arg(args, int); // Obtém o próximo argumento da pilha, do tipo int
// va_end(args); // Finaliza o uso da lista

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