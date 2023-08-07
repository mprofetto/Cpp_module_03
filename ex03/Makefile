# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/07 13:35:48 by mprofett          #+#    #+#              #
#    Updated: 2023/08/07 16:56:23 by mprofett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ./DiamondTrap

SRC			= main.cpp ClapTrap.cpp DiamondTrap.cpp FragTrap.cpp ScavTrap.cpp

OBJ			= ${SRC:.cpp=.o}

CC			= g++

RM			= rm -rf

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CPPFLAGS} ${OBJ} -o ${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
