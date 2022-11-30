# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 10:42:57 by mdelforg          #+#    #+#              #
#    Updated: 2022/11/10 12:09:43 by mdelforg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= brain

SRCSDIR		= srcs
SRCS		= Animal.cpp \
			  Dog.cpp \
			  Cat.cpp \
			  Brain.cpp
MAIN		= main.cpp

OBJSDIR		= obj
OBJS		= ${SRCS:.cpp=.o}

INCLDIR		= incl

CXX			= c++
RM			= rm -rf

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -I ${INCLDIR}
DMDFLAGS	= -Wshadow -Wno-shadow



${NAME}:		${addprefix ${OBJSDIR}/, ${OBJS}} ${MAIN}
					@${CXX} ${CXXFLAGS} ${DMDFLAGS} -o ${NAME} $^
					@echo "The executable \033[35m${NAME}\033[0m is ready"

${OBJSDIR}:
					@mkdir -p $@

${OBJSDIR}/%.o:	${SRCSDIR}/%.cpp | ${OBJSDIR}
					@${CXX} ${CXXFLAGS} ${DMDFLAGS} -c $< -o $@

all:			${NAME}

exe:			all clean

clean:
					@${RM} ${OBJSDIR}

fclean:			clean
					@${RM} ${NAME}

re:				fclean all

.PHONY:	all exe clean fclean re bonus
