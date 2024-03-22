FILES = swap.c lst.c main.c

OBJS = $(FILES:.c=.o)

RM = rm -f
NAME =  push.a
GCC = gcc -Wall -Wextra -Werror

.SILENT: 
all: $(NAME)

$(NAME) : $(OBJS) push_swap.h
	ar rcs $(NAME) $(OBJS)

%.o: %.c push_swap.h
	$(GCC) -c $< -o $@

gcc: $(NAME)
	$(GCC) main.c $(NAME) -o push_swap && ./push_swap

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all

run: gcc fclean

.PHONY: re fclean clean all
