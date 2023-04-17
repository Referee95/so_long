# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/04 10:32:31 by ykhalil-          #+#    #+#              #
#    Updated: 2023/04/17 02:42:26 by ykhalil-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROGRAM = so_long

SRCS = 	get_next_line.c get_next_line_utils.c  utils.c ft_split.c ft_print.c \
		errors.c errors2.c utils2.c path.c 

CC = gcc

# MLX = -lmlx -framework OpenGL -framework AppKit
MLX = -lmlx -lXext -lX11
CFLAGS = -Wall -Wextra -Werror -g

OBJS = ${SRCS:.c=.o}

all : $(PROGRAM)

$(PROGRAM) : $(OBJS)
		$(CC) $(MLX) $(CFLAGS) so_long.c $^ -o $(PROGRAM)
		
clean :
	@rm -rf $(OBJS)
	
fclean : clean
	@rm -rf $(PROGRAM)

re : fclean all