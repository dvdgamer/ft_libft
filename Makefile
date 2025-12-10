NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = $(shell find . -maxdepth 1 -name '*.c')
OBJS = $(SRC:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
