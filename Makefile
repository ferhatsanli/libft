# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 17:07:32 by fsanli            #+#    #+#              #
#    Updated: 2024/10/24 23:51:09 by fsanli           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# <<<TEST VARIABLES>>>
# TEST = $(filter %.c, $(MAKECMDGOALS)) #main.c
# TESTOUT = test

# <<<VARIABLES>>>
SRC				=	ft_atoi.c	ft_isprint.c	ft_memset.c	ft_strnstr.c \
					ft_bzero.c	ft_ispunct.c	ft_strchr.c	 ft_strrchr.c \
					ft_isalnum.c	ft_memchr.c	ft_strlcat.c	ft_tolower.c \
					ft_isalpha.c	ft_memcmp.c	ft_strlcpy.c	ft_toupper.c \
					ft_isascii.c	ft_memcpy.c	ft_strlen.c \
					ft_isdigit.c	ft_memmove.c	ft_strncmp.c
CC				= cc
RM				= rm -f
CFLAGS			=  -Wall -Wextra -Werror
NAME			= libft.a

HEADER			= libft.h
OBJS				= $(SRC:.c=.o)

all:			$(NAME)

# OBJ -> LIB
$(NAME):		$(OBJS)
				@echo "Linking and producing the static library file"
				ar rcs $(NAME) $(OBJS)

# %.o: %.c $(HEADER)
# 	$(CC) $(CFLAGS) -c $< -o $@

# Clean OBJs
clean:
				@echo "Cleaning the objects"
				$(RM) $(OBJ) $(TESTOUT)

# Clean OBJs and LIBtest_strlcat();
fclean:			clean
				@echo "Removing the static library, object files and test outputs"
				$(RM) $(NAME) $(OBJ) $(TESTOUT)

# Clean OBJs and LIB
re:				fclean $(NAME)

test: $(HEADER)
				@echo "Testing -> $(TEST)\n"
				$(CC) -o $(TESTOUT) $(TEST) -lbsd
				@echo "Compilation done\n"
				chmod +x $(TESTOUT)
				@echo "Execution permission has been added\n"
				./$(TESTOUT)
				@echo "----\n"
				@if [ -e $(TESTOUT) ]; then \
					echo "test file found. Removing it...\n"; \
					rm $(TESTOUT); \
				else \
					echo "No test file found\n"; \
				fi
				@echo "\n---DONE---\n"

.PHONY:			all clean fclean re test
