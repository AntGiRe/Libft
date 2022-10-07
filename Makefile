# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 13:19:39 by agil-rey          #+#    #+#              #
#    Updated: 2022/10/05 12:20:58 by agil-rey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_memset.c ft_strdup.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
ft_bzero.c ft_strchr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c \
ft_strncmp.c ft_strlcat.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
ft_substr.c ft_strjoin.c

CC = gcc -c

FLAGS = -Wall -Werror -Wextra

OBJS = ${SRCS:.c=.o}

${NAME}: ${OBJS}
		$(CC) $(FLAGS) -c $(SRCS)
		ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all