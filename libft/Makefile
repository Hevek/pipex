# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: restevez <restevez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/23 14:27:47 by restevez          #+#    #+#              #
#    Updated: 2024/11/29 12:35:14 by restevez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c

SRC_B = ft_lstnew_bonus.c

CC = cc

FLAGS = -Wall -Wextra -Werror

OBJECTS = $(SRC:%.c=%.o)

OBJECTS_B = $(SRC_B:%.c=%.o)

INCLUDES = 	libft.h

RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)

bonus: $(OBJECTS_B)

%.o:%.c $(INCLUDES)
	${CC} ${FLAGS} -c $< -o $@
	ar rc $(NAME) $@

clean:
	$(RM) $(OBJECTS) $(OBJECTS_B)

fclean: clean
	$(RM) $(NAME)

re: fclean all
