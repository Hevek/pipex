# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: restevez <restevez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/18 01:08:33 by restevez          #+#    #+#              #
#    Updated: 2025/04/18 02:07:35 by restevez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROG	= pipex
PROG_B  = pipex_bonus

SRCS 	= src/pipex.c src/utils.c src/handlers.c
OBJS 	= ${SRCS:.c=.o}
MAIN	= src/pipex.c

SRCS_B	= src/pipex_bonus.c src/utils.c src/utils_bonus.c
OBJS_B	= ${SRCS_B:.c=.o}
MAIN_B	= src/pipex_bonus.c

HEADER	= -Iinclude

CC 		= cc
CFLAGS 	= -Wall -Wextra -Werror

%.o: %.c
	@cc ${CFLAGS} ${HEADER} -c $< -o $@

all: 		${PROG}

${PROG}:	${OBJS}
					@echo "\033[33m----Compiling lib----\n"
					@make re -C ./libft
					@$(CC) ${OBJS} -Llibft -lft -o ${PROG}
					@echo "\033[32mPipex Compiled! \n"


bonus:		${PROG_B}

${PROG_B}:	${OBJS_B}
					@echo "\033[33m----Compiling lib----\n"
					@make re -C ./libft
					@$(CC) ${OBJS_B} -Llibft -lft -o ${PROG_B}
					@echo "\033[32mPipex Bonus Compiled! \n"

clean:
					@echo "\033[1;34m----Starting cleanup----\n\033[0m"
					@make clean -C ./libft
					@rm -f ${OBJS} ${OBJS_B}

fclean: 	clean
					@make fclean -C ./libft
					@rm -f $(NAME)
					@rm -f ${PROG}
					@echo "\n\033[32mEverything was sucessfully deleted! \n"

re:			fclean all

re_bonus:	fclean bonus
