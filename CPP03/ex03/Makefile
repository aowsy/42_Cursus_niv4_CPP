# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 10:42:57 by mdelforg          #+#    #+#              #
#    Updated: 2022/10/14 12:56:47 by mdelforg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= DiamondTrap

SRCS		= main.cpp \
			  srcs/ClapTrap.cpp \
			  srcs/ScavTrap.cpp \
			  srcs/FragTrap.cpp \
			  srcs/DiamondTrap.cpp

OBJS		= $(SRCS:.cpp=.o)

CXX			= c++
RM			= rm -f

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
DMDFLAGS	= -Wshadow -Wno-shadow


$(NAME):	$(OBJS)
				@$(CXX) $(CXXFLAGS) $(DMDFLAGS) $(OBJS) -o $(NAME)
				@echo "The executable \033[35m$(NAME)\033[0m is ready"

.cpp.o:
				@$(CXX) $(CXXFLAGS) $(DMDFLAGS) -c $< -o $(<:.cpp=.o)

all:		$(NAME)

exe:		all clean

clean:
				@$(RM) $(OBJS)

fclean:		clean
				@$(RM) $(NAME)

re:			fclean all

.PHONY:	all exe clean fclean re bonus
