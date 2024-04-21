FILES = algo_bonus.c list.utils_bonus.c moves_bonus.c more_moves_bonus.c ft_split_bonus.c ft_atoi_bonus.c check_error_bonus.c gnl/get_next_line.c gnl/get_next_line_utils.c

OBJS=$(FILES:.c=.o)

NAME =  ../checker
CC = cc -Wall -Wextra -Werror 
CC = cc -Wall -Wextra -Werror
RM = rm -f

GREEN=\033[0;32m
NC=\033[0m

all: $(NAME)

$(NAME): push_swap_bonus.h $(OBJS) $(FILES)
	@make -C ../printf/
	@$(CC) $(OBJS) ../printf/libftprintf.a -o $(NAME)
	@echo "$(GREEN)checker compiled$(NC)"

%.o: %.c push_swap_bonus.h 
	@$(CC) -c $< -o $@

clean:
	@make clean -C ../printf/
	@$(RM) $(OBJS)

fclean: clean
	@make fclean -C ../printf/
	@$(RM) $(NAME)

re : fclean all

.PHONY: re fclean clean all
