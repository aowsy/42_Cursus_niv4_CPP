# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 09:57:56 by mdelforg          #+#    #+#              #
#    Updated: 2022/10/04 15:10:22 by mdelforg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= bytebook

SRCS		= main.cpp phonebook.class.cpp contact.class.cpp

OBJS		= $(SRCS:.cpp=.o)

CXX			= c++
RM			= rm -f

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98


$(NAME):	$(OBJS)
				$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all:		$(NAME)

exe:		all clean

clean:
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:	all exe clean fclean re bonus
