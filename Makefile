SRCS = printf/ft_putchar.c printf/ft_putnbr.c printf/ft_putstr.c printf/ft_printf.c printf/ft_putung.c printf/ft_putx.c printf/ft_putp.c
FILES = push_swap.c list.utils.c move.c move2.c ft_split.c ft_atoi.c utils.c sort.c more.utils.c


NAME =  push_swap
CC = cc -Wall -Wextra -Werror

.SILENT:

all: $(NAME)

$(NAME) : push_swap.h printf/ft_printf.h
	$(CC) $(FILES) $(SRCS) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJP)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY: re fclean clean all
