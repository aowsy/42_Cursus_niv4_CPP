# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 10:42:57 by mdelforg          #+#    #+#              #
#    Updated: 2022/11/17 12:19:11 by mdelforg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= intern

SRCSDIR		= srcs
SRCS		= Bureaucrat.cpp \
			  AForm.cpp \
			  ShrubberyCreationForm.cpp \
			  RobotomyRequestForm.cpp \
			  PresidentialPardonForm.cpp \
			  Intern.cpp
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

exe:			all clean

clean:
					@${RM} ${OBJSDIR}

fclean:			clean
					@${RM} ${NAME} *_shrubbery

re:				fclean all

.PHONY:	all exe clean fclean re bonus
