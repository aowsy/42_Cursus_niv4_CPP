# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 15:48:51 by mdelforg          #+#    #+#              #
#    Updated: 2022/10/05 15:14:41 by mdelforg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= replace

SRCS		= main.cpp

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
