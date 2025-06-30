# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smuneer <smuneer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/30 13:54:41 by smuneer           #+#    #+#              #
#    Updated: 2025/06/30 14:05:59 by smuneer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed
SRC = Fixed.cpp main.cpp Point.cpp bsp.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
all: $(NAME)
$(NAME): $(OBJ)
		$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean $(NAME)
.PHONY: all clean fclean re 