FILES = algo.c list.utils.c moves.c more_moves.c ft_split.c ft_atoi.c utils.c utils_1.c check_error.c

OBJS=$(FILES:.c=.o)

NAME =  push_swap
CC = cc -Wall -Wextra -Werror
RM = rm -f

# Define some color codes
RED=\033[0;31m
GREY=\033[1;30m
GREEN=\033[0;32m
NC=\033[0m

all:
	@if [ -n "$(wildcard *.o)" ] && [ -f "$(NAME)" ]; then \
        echo "$(RED)everything is already done$(NC)";\
    else \
		$(MAKE) $(NAME);\
    fi


$(NAME) : push_swap.h $(OBJS)
	@echo "$(GREY)Compiling push_swap...$(NC)"
	@sleep 0.5
	@make -C ../printf/
	@$(CC) $(OBJS) ../printf/libftprintf.a -o $(NAME)
	@echo "$(GREEN)Push_swap compiled ✔︎$(NC)"

%.o: %.c push_swap.h
	@$(CC) -c $< -o $@

clean:
	@if [ -n "$(wildcard $(OBJS))" ]; then \
        echo "$(GREY)Cleaning object files...$(NC)"; \
        make clean -C ../printf/; \
        sleep 0.5; \
        $(RM) $(OBJS); \
        echo "$(GREEN)Object files cleaned ✔︎$(NC)"; \
    else \
        echo "$(GREEN)No object files to clean$(NC)"; \
    fi

fclean: clean
	@if [ -f "$(NAME)" ]; then \
        make fclean -C ../printf/;\
        $(RM) $(NAME); \
    else \
        echo "$(GREEN)No $(NAME) file to clean$(NC)"; \
    fi

re : fclean  all

.PHONY: re fclean clean all