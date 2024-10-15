# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 17:07:32 by fsanli            #+#    #+#              #
#    Updated: 2024/10/10 12:24:51 by fsanli           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# <<<VARIABLES>>>
TESTSRC				:= $(wildcard ft_*.c)
NAME				= libft.a
CC					= cc
CFLAGS				= -Wall -Wextra -Werror -I
SRC					= src/
SRCS				= ft_*.c
OBJS				= $(SRCS:.c=.o)



all: $(NAME)

# OBJ -> LIB
$(NAME):			$(OBJS)
						echo "Linking and producing the static library file"
						ar rcs $(NAME) $(OBJS)

# SRC -> OBJ
$(OBJS):			$(SRCS)

$(SRCS):
						$(CC) $(CFLAGS) $(OBJS) $(SRC)/$(SRCS)

# Clean OBJs
clean:
						echo "Cleaning the objects"
						rm -f $(OBJS)

# Clean OBJs and LIB
fclean:				clean
						echo "Removing the static library file"
						rm -rf $(NAME)

# Clean OBJs and LIB
re:					fclean $(NAME)

test:				testvars
						echo "test a"

testvars:
						echo "Setting environment vars for test"
						echo "$<"


