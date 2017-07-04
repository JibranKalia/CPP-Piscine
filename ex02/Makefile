# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 08:31:22 by jkalia            #+#    #+#              #
#    Updated: 2017/07/04 09:17:57 by jkalia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account
OBJECTS = Account.class.o
$(RM) = rm -f
CXXFLAGS = -Wall -Werror -Wextra
all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $@

clean:
	@if [ -e $(OBJECTS) ]; \
		then \
		rm -rf $(OBJECTS); \
		printf "\r\033[32mRemoving $(OBJECTS)\033[0m\033[K\n"; \
		fi;

fclean:
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
