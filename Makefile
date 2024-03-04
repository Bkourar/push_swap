# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/12 10:36:12 by bikourar          #+#    #+#              #
#    Updated: 2024/03/04 23:01:05 by bikourar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BONUS = checker
# PATH = ./push_swap_bonus
FILES = ft_atoi.c ft_countword.c ft_strjoin.c ft_split.c ft_strlen.c ft_convert.c ft_free_Dynamic.c ft_creat.c \
		ft_rules_a.c ft_rules_b.c ft_rules_mix.c ft_free_stack.c  ft_sort_stack_big.c ft_sort_stack_of_three.c \
		ft_sort_stack_of_tow.c ft_sort_stack_of_four.c ft_lstsize.c ft_lstlast.c main.c

FILES_BONUS = ./push_swap_bonus/main_bonus.c ./push_swap_bonus/ft_strjoin_bonus.c ./push_swap_bonus/ft_atoi_bonus.c ./push_swap_bonus/ft_convert_bonus.c ./push_swap_bonus/ft_count_word_bonus.c \
		./push_swap_bonus/ft_creat_bonus.c ./push_swap_bonus/ft_free_Dynamic_bonus.c ./push_swap_bonus/ft_free_stack_bonus.c ./push_swap_bonus/ft_rules_a_bonus.c ./push_swap_bonus/ft_rules_b_bonus.c \
		./push_swap_bonus/ft_rules_mix_bonus.c ./push_swap_bonus/ft_split_bonus.c ./push_swap_bonus/ft_strlen_bonus.c ./push_swap_bonus/get_next_line_bonus.c ./push_swap_bonus/get_next_utils_bonus.c \
		./push_swap_bonus/ft_strcmp_bonus.c

CFLAGS = -Wall -Wextra -Werror

# OPEN = $(PATH)/$(FILES_BONUS)
OBJ = $(FILES:.c=.o)
OBJ_B = $(FILES_BONUS:.c=.o)

all						: $(NAME)

$(NAME)					: $(OBJ)
	cc $(CFLAGS) $(OBJ) -o $(NAME)

bonus					: $(NAME_BONUS)

$(NAME_BONUS)			: $(OBJ_B)
	cc $(CFLAGS) $(OBJ_B) -o $(NAME_BONUS)

/push_swap_bonus/%.o	: /push_swap_bonus/$(%.c && %.h)
	cc $(CFLAGS) -c $< -o $@

%.o						: %.c push_swap.h
	cc $(CFLAGS) -c $< -o $@

fclean					: clean
	rm -rf $(NAME) $(NAME_BONUS)

clean					:
	rm	-rf $(OBJ) $(OBJ_B)

re						: fclean all

.PHONY : clean
