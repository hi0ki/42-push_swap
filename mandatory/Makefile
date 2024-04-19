SRCS = ../printf/ft_putchar.c ../printf/ft_putnbr.c ../printf/ft_putstr.c ../printf/ft_printf.c ../printf/ft_putung.c ../printf/ft_putx.c ../printf/ft_putp.c
FILES = algo.c list.utils.c moves.c more_moves.c ft_split.c ft_atoi.c utils.c utils_1.c


NAME =  push_swap
CC = cc -Wall -Wextra -Werror 
RM = rm -f
# Define some color codes
RED=\033[0;31m
GREEN=\033[0;32m
NC=\033[0m

.SILENT:

all: $(NAME)

$(NAME) : push_swap.h ../printf/ft_printf.h
	$(CC) $(FILES) $(SRCS) -o $(NAME)
	echo "$(GREEN)push_swap compiled"

%.o: %.c push_swap.h
	$(CC) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJP)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY: re fclean clean all

#  -fsanitize=address