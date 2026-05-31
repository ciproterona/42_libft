# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eroque-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/16 21:09:36 by eroque-d          #+#    #+#              #
#    Updated: 2026/05/31 14:10:51 by eroque-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFILES =	ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_strlen.c		\
			ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memmove.c 	\
			ft_strlcpy.c 	\
			ft_strlcat.c	\
			ft_toupper.c 	\
			ft_tolower.c 	\
			ft_strchr.c 	\
			ft_strrchr.c 	\
			ft_strncmp.c 	\
			ft_memchr.c 	\
			ft_memcmp.c 	\
			ft_strnstr.c 	\
			ft_atoi.c 		\
			ft_calloc.c 	\
			ft_strdup.c 	\
			ft_substr.c 	\
			ft_strjoin.c 	\
			ft_strtrim.c 	\
			ft_split.c		\
			ft_itoa.c

OFILES = $(CFILES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
