# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 17:07:32 by fsanli            #+#    #+#              #
#    Updated: 2024/10/15 23:50:49 by fsanli           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# <<<TEST VARIABLES>>>
TEST = $(filter %.c, $(MAKECMDGOALS)) main.c
TESTOUT = test

# <<<VARIABLES>>>
CC = gcc
CFLAGS =  -Wall -Wextra -Werror
NAME = libft.a
SRC = 	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_ispunct.c ft_memcpy.c ft_memset.c ft_strlen.c
HEADER = libft.h
OBJ = $(SRC:.c=.o)
.PHONY: test

all: $(NAME)

# OBJ -> LIB
$(NAME): $(OBJS)
	@echo "Linking and producing the static library file"
	ar rcs $@ $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean OBJs
clean:
	@echo "Cleaning the objects"
	rm -f $(OBJ) $(TESTOUT)

# Clean OBJs and LIB
fclean:	clean
	@echo "Removing the static library, object files and test outputs"
	rm -f $(NAME) $(OBJ) $(TESTOUT)

# Clean OBJs and LIB
re:	fclean all

test: $(HEADER)
	@echo "Testing -> $(TEST)"
	$(CC) -o $(TESTOUT) $(TEST)
	@echo "Compilation done"
	chmod +x $(TESTOUT)
	@echo "Execution permission has been added"
	./$(TESTOUT)
	@if [ -e $(TESTOUT) ]; then \
		echo "test file found. Removing it..."; \
		rm $(TESTOUT); \
	else \
		echo "No test file found"; \
	fi
	@echo "\n---DONE---\n"
