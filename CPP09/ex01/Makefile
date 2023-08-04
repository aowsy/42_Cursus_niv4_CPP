# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 14:44:47 by mdelforg          #+#    #+#              #
#    Updated: 2023/04/17 15:17:02 by mdelforg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= RPN

SRCSDIR		= srcs
SRCS		= RPN.cpp
MAIN		= main.cpp

OBJSDIR		= obj
OBJS		= ${SRCS:.cpp=.o}

INCLDIR		= incl

CXX			= c++
RM			= rm -rf

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -I ${INCLDIR}



${NAME}:		${addprefix ${OBJSDIR}/, ${OBJS}} ${MAIN}
					@${CXX} ${CXXFLAGS} -o ${NAME} $^
					@echo "The executable \033[35m${NAME}\033[0m is ready"

${OBJSDIR}:
					@mkdir -p $@

${OBJSDIR}/%.o:	${SRCSDIR}/%.cpp | ${OBJSDIR}
					@${CXX} ${CXXFLAGS} ${DMDFLAGS} -c $< -o $@

all:			${NAME}

clean:
					@${RM} ${OBJSDIR}

fclean:			clean
					@${RM} ${NAME}

re:				fclean all

.PHONY:	all clean fclean re
