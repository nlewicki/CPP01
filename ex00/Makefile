# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 11:08:52 by nlewicki          #+#    #+#              #
#    Updated: 2024/11/19 12:25:40 by nlewicki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = zombie

SRCS = main.cpp \
       Zombie.cpp \
       newZombie.cpp \
       randomChump.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
