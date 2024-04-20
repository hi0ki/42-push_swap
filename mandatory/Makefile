FILES = algo.c list.utils.c moves.c more_moves.c ft_split.c ft_atoi.c utils.c utils_1.c check_error.c

OBJS=$(FILES:.c=.o)

NAME =  push_swap
CC = cc -Wall -Wextra -Werror
RM = rm -f

# Define some color codes
RED=\033[0;31m
GREEN=\033[0;32m
NC=\033[0m

.SILENT:

all: $(NAME)

$(NAME) : push_swap.h $(OBJS)
	make -C ../printf/
	$(CC) $(OBJS) ../printf/libftprintf.a -o $(NAME)
	echo "$(GREEN)push_swap compiled"

%.o: %.c push_swap.h
	$(CC) -c $< -o $@

clean:
	make clean -C ../printf/
	$(RM) $(OBJS)

fclean: clean
	make fclean -C ../printf/
	$(RM) $(NAME)

re : fclean all

.PHONY: re fclean clean all