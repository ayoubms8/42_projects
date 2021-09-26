# -*- Makefile -*-

NAME := libft.a
CC := gcc
CFLAGS := -Wall -Werror -Wextra -c
SRC_DIR := ./srcs/
SRC_FILES := ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strdup.c \
			ft_calloc.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_split.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c
OBJ_FILES = $(SRC_FILES:.c=.o)
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(addprefix $(SRC_DIR), $(OBJ_FILES))

BONUS_FILES = ft_lstnew.c
BONUS_OBJ = $(BONUS_FILES:.c=.o)
BONUSES = $(addprefix $(SRC_DIR), $(BONUS_FILES))
BONUSOS = $(addprefix $(SRC_DIR), $(BONUS_OBJ))
LIBC := ar rc
LIBR := ranlib
RM := rm -f
HEADER := -I includes

all: $(NAME)

$(SRC_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) $< -o $@ $(HEADER)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)
	$(LIBR) $(NAME)

bonus: $(BONUSOS)
	rm -f $(NAME)
	$(LIBC) $(NAME) $(OBJS) $(BONUSOS)
	$(LIBR) $(NAME)

clean:
	rm -f $(OBJS) $(BONUSOS)

fclean: clean
	rm -f $(NAME)

re: fclean all
