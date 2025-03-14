# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/08 20:27:44 by vafavard          #+#    #+#              #
#    Updated: 2025/03/09 23:01:06 by admoufle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	rush-02

SRC	=	src/get_dict.c\
		src/get_line.c\
		src/wperiod.c\
		src/utils.c\
		src/utils1.c\
		src/utils2.c\
		src/unit.c\
		src/translate.c\
		src/translate1.c\
		src/error_case.c\
		src/hundred.c\
		src/parsing.c\
		src/teens.c\
		src/dozen.c\
		src/main.c

SRC_DIR	=	src/

BUILD	=	.build/

OBJ	=	$(addprefix $(BUILD), $(SRC:.c=.o))

DEPS	=	$(OBJ:.o=.d)
	
CC	=	cc

CFLAGS	=	-Wall -Werror -Wextra -MMD -MP -g3

INCLUDE	=	include/

all:	$(NAME)

$(NAME):	$(BUILD) $(OBJ)
	$(CC) $(OBJ) -o $@

$(BUILD):
	mkdir $@
	mkdir $@$(SRC_DIR)

$(BUILD)$(SRC_DIR)%.o:	$(SRC_DIR)%.c Makefile
	$(CC) $(CFLAGS) -c $< -o $@ -I./$(INCLUDE)

clean:
	rm -rf $(BUILD)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean

-include $(OBJ:.o=.d)
