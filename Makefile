NAME = push_swap
NAME_BONUS = checker
FILES = ./Mandatory/ft_atoi.c ./Mandatory/ft_countword.c ./Mandatory/ft_strjoin.c ./Mandatory/ft_split.c  ./Mandatory/ft_strlen.c \
		./Mandatory/ft_convert.c ./Mandatory/ft_free_Dynamic.c ./Mandatory/ft_creat.c ./Mandatory/ft_rules_a.c ./Mandatory/ft_rules_b.c \
		./Mandatory/ft_rules_mix.c ./Mandatory/ft_free_stack.c ./Mandatory/ft_sort_stack_big.c  ./Mandatory/ft_sort_stack_of_three.c ./Mandatory/ft_sort_stack_of_tow.c \
		./Mandatory/ft_sort_stack_of_four.c ./Mandatory/ft_lstsize.c ./Mandatory/ft_lstlast.c ./Mandatory/ft_isdigit.c ./Mandatory/main.c 

FILES_BONUS = ./Bonus/main_bonus.c ./Bonus/ft_strjoin_bonus.c ./Bonus/ft_atoi_bonus.c ./Bonus/ft_convert_bonus.c ./Bonus/ft_count_word_bonus.c \
		./Bonus/ft_creat_bonus.c ./Bonus/ft_free_Dynamic_bonus.c ./Bonus/ft_free_stack_bonus.c ./Bonus/ft_rules_a_bonus.c ./Bonus/ft_rules_b_bonus.c \
		./Bonus/ft_rules_mix_bonus.c ./Bonus/ft_split_bonus.c ./Bonus/ft_strlen_bonus.c ./Bonus/get_next_line_bonus.c ./Bonus/get_next_utils_bonus.c \
		./Bonus/ft_strcmp_bonus.c ./Bonus/ft_lstnew_bonus.c ./Bonus/ft_lstadd_back_bonus.c ./Bonus/ft_lstclear_bonus.c ./Bonus/ft_isdigit.c

RED = \033[0;31m
GREEN = \033[0;32m

CFLAGS = -Wall -Wextra -Werror
OBJ = $(FILES:.c=.o)
OBJ_B = $(FILES_BONUS:.c=.o)

all						: $(NAME)

$(NAME)					: $(OBJ)
	@cc $(OBJ) -o $(NAME)
	@echo "$(GREEN)make push_swap"

bonus					: $(NAME_BONUS)

$(NAME_BONUS)			: $(OBJ_B)
	@cc $(OBJ_B) -o $(NAME_BONUS)
	@echo "$(GREEN)make checker"

./Bonus/%.o	:	./Bonus/%.c ./Bonus/push_swap_bonus.h
	@cc $(CFLAGS) -c $< -o $@

 ./Mandatory/%.o		:  ./Mandatory/%.c push_swap.h
	@cc $(CFLAGS) -c $< -o $@

fclean					: clean
	@rm -f $(NAME) $(NAME_BONUS)
	@echo "$(RED)clean push_swap"

clean					:
	@rm	-f $(OBJ) $(OBJ_B)

re						: fclean all

.PHONY : clean
