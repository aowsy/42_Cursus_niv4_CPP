# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 10:42:57 by mdelforg          #+#    #+#              #
#    Updated: 2022/10/12 15:56:14 by mdelforg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= bsp

SRCS		= main.cpp \
			  Fixed.cpp \
			  Point.cpp \
			  bsp.cpp

OBJS		= $(SRCS:.cpp=.o)

CXX			= c++
RM			= rm -f

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98


$(NAME):	$(OBJS)
				@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
				@echo "The executable \033[35m$(NAME)\033[0m is ready"

.cpp.o:
				@$(CXX) $(CXXFLAGS) -c $< -o $(<:.cpp=.o)

all:		$(NAME)

exe:		all clean

clean:
				@$(RM) $(OBJS)

fclean:		clean
				@$(RM) $(NAME)

re:			fclean all

.PHONY:	all exe clean fclean re bonus
