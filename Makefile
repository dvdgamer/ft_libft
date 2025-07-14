NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC =	ft_atoi.c\
	ft_bzero.c\
	ft_calloc.c\
	ft_count_digits.c\
	ft_del_content.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isspace.c\
	ft_isprint.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memset.c\
	ft_strchr.c\
	ft_strcpy.c\
	ft_strlcat.c\
	ft_strlcpy.c\
	ft_strlen.c\
	ft_strncmp.c\
	ft_strnstr.c\
	ft_strrchr.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_split.c\
	ft_itoa.c\
	ft_strmapi.c\
	ft_striteri.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c

BONUS_SRC =	ft_lstnew_bonus.c\
        ft_lstadd_front_bonus.c\
        ft_lstsize_bonus.c\
        ft_lstlast_bonus.c\
        ft_lstadd_back_bonus.c\
        ft_lstdelone_bonus.c\
        ft_lstclear_bonus.c\
        ft_lstiter_bonus.c\
        ft_lstmap_bonus.c

OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(BONUS_SRC:.c=.o)

.PHONY: all clean fclean re bonus

all: $(NAME)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
