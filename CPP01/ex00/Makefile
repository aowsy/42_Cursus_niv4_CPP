# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 09:57:56 by mdelforg          #+#    #+#              #
#    Updated: 2022/09/30 15:11:32 by mdelforg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= BraiiiiiiinnnzzzZ

SRCS		= main.cpp \
			  Zombie.cpp \
			  newZombie.cpp \
			  randomChump.cpp

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
