# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 08:31:22 by jkalia            #+#    #+#              #
#    Updated: 2017/07/07 18:04:20 by jkalia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fragtrap.out
SRCS = FragTrap.cpp ScavTrap.cpp main.cpp
HDRS = FragTrap.hpp ScavTrap.hpp

OBJS = $(SRCS:.cpp=.o)
LIBS =

CXXFLAGS += -std=c++98
CPPFLAGS += -Wall -Wextra -Werror
CFLAGS +=
LDFLAGS += -Wall -Wextra -Werror

CXX = clang++

.PHONY: format clean fclean re

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	    $(CXX) $(LDFLAGS) $(OBJS) $(LIBS) -o $@

%.o: %.cpp $(HDRS)
	    $(CXX) -c $(CXXFLAGS) $(CPPFLAGS) $< -o $@

%.o: %.c
	    $(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

format: $(SRCS) $(HDRS)
	    clang-format -style=Google -i $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all


.PHONY:re fclean clean all
