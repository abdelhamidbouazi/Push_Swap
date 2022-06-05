# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 17:20:49 by abouazi           #+#    #+#              #
#    Updated: 2022/05/24 21:17:48 by abouazi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = push_swap
BONUS = checker

FILES = M/check.c M/add.c M/create.c M/sorting.c M/push.c M/radix_utils.c M/sorted.c M/giving_index.c M/pop.c \
			M/get.c M/is_empty.c M/sort_three_five.c M/utils.c M/sort.c M/atoi.c M/split.c
PS = push_swap.c
OBJ = $(FILES:.c=.o)
BONUS_FILES = B/ft_memcmp.c B/actions.c B/checker.c B/get_next_line.c B/get_next_line_utils.c
BONUS_OBJ = $(BONUS_FILES:.c=.o)

.PHONY: all fclean clean re
all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${FLAGS} ${OBJ} ${PS} -o ${NAME}

%.o: %.c push_swap.h
	${CC} ${FLAGS} -c $< -o $@

bonus: ${BONUS_OBJ}
	${CC} ${FLAGS} ${BONUS_OBJ} ${FILES} -o ${BONUS}
clean:
	${RM} ${OBJ}
	${RM} ${OBJ} ${BONUS_OBJ}

fclean: clean
	${RM} ${NAME}
	${RM} ${BONUS}
re: fclean all