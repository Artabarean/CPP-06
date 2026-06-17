# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/16 11:44:16 by atabarea          #+#    #+#              #
#    Updated: 2026/06/17 15:08:37 by atabarea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Real_type
CXX			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= \
	main.cpp \
	A.cpp \
	B.cpp \
	C.cpp \
	Base.cpp

OBJS	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)  

%.o: %.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re