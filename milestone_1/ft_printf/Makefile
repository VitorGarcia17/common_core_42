# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/13 15:44:53 by vipinhei          #+#    #+#              #
#    Updated: 2025/05/14 00:37:04 by vipinhei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
AR = ar rsc
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
SRCS = ft_printf.c printf_chars.c printf_num.c printf_hex.c
OBJS = $(SRCS:.c=.o)
LIBFT = libft/libft.a

.SILENT:

all: $(NAME)
$(NAME): $(OBJS) $(LIBFT)
	$(AR) $(NAME) $(OBJS) $(LIBFT)

$(LIBFT):
	$(MAKE) -C libft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C libft

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C libft

re: fclean all
