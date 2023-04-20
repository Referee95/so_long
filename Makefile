# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/04 10:32:31 by ykhalil-          #+#    #+#              #
#    Updated: 2023/04/20 01:22:58 by ykhalil-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROGRAM = so_long

B_PROGRAM = so_long_bonus

SRCS = 	get_next_line.c get_next_line_utils.c  utils.c ft_split.c ft_print.c \
		errors.c errors2.c utils2.c path.c utils3.c utils4.c 
		
B_SRCS = utils_bonus.c \

CC = gcc

MLX = -lmlx -framework OpenGL -framework AppKit

CFLAGS = -Wall -Wextra -Werror 

OBJS = ${SRCS:.c=.o}

B_OBJS = ${B_SRCS:.c=.o}

all : $(PROGRAM)

$(PROGRAM) : $(OBJS) so_long.c
		$(CC) $(MLX) $(CFLAGS) $^ -o $(PROGRAM)

bonus :$(B_PROGRAM)

$(B_PROGRAM) : $(OBJS) $(B_OBJS) so_long_bonus.c
		$(CC) $(MLX) $(CFLAGS) $^ -o $(B_PROGRAM)
clean :
	@rm -rf $(OBJS) $(B_OBJS)
	
fclean : clean
	@rm -rf $(PROGRAM) $(B_PROGRAM) 

re : fclean all