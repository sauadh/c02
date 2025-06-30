# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smuneer <smuneer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/30 10:50:55 by smuneer           #+#    #+#              #
#    Updated: 2025/06/30 10:50:56 by smuneer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed
SRC = Fixed.cpp main.cpp
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