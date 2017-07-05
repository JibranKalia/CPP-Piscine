# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 08:31:22 by jkalia            #+#    #+#              #
#    Updated: 2017/07/05 06:35:54 by jkalia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pony
SRCS = Pony.class.cpp main.cpp
HDRS = Pony.class.hpp

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
	@if [ -e $(OBJECTS) ]; \
		then \
		rm -rf $(OBJECTS); \
		printf "\r\033[32mRemoving $(OBJECTS)\033[0m\033[K\n"; \
		fi;

fclean: clean
	@$(MAKE) clean
	@if [ -e $(NAME) ]; \
		then \
		rm -f $(NAME); \
		printf "\r\033[32mRemoving $(NAME)\033[0m\033[K\n"; \
		fi;

re:
	@$(MAKE) fclean
	@$(MAKE) all


.PHONY:re fclean clean all
