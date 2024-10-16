# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/20 13:23:46 by lowatell          #+#    #+#              #
#    Updated: 2024/10/16 11:29:11 by lowatell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

INCS = inc

SRCS =  srcs/ft_isalpha.c srcs/ft_isdigit.c srcs/ft_isalnum.c srcs/ft_isascii.c \
		srcs/ft_isprint.c srcs/ft_strlen.c srcs/ft_memset.c srcs/ft_bzero.c \
		srcs/ft_memcpy.c srcs/ft_memmove.c srcs/ft_strlcpy.c srcs/ft_strlcat.c \
		srcs/ft_toupper.c srcs/ft_tolower.c srcs/ft_strchr.c srcs/ft_strrchr.c \
		srcs/ft_strncmp.c srcs/ft_memchr.c srcs/ft_memcmp.c srcs/ft_strnstr.c \
		srcs/ft_atoi.c srcs/ft_calloc.c srcs/ft_strdup.c srcs/ft_substr.c \
		srcs/ft_strjoin.c srcs/ft_strtrim.c srcs/ft_split.c srcs/ft_itoa.c \
		srcs/ft_strmapi.c srcs/ft_striteri.c srcs/ft_putchar_fd.c \
		srcs/ft_putstr_fd.c srcs/ft_putendl_fd.c srcs/ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)

BONUS = bonus/ft_lstnew_bonus.c bonus/ft_lstadd_front_bonus.c bonus/ft_lstsize_bonus.c bonus/ft_lstlast_bonus.c \
		bonus/ft_lstadd_back_bonus.c bonus/ft_lstdelone_bonus.c bonus/ft_lstclear_bonus.c \
		bonus/ft_lstiter_bonus.c bonus/ft_lstmap_bonus.c

BONUS_OBJS = $(BONUS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCS)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus
