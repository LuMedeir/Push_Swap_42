# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/18 10:46:18 by lumedeir          #+#    #+#              #
#    Updated: 2023/10/04 16:49:30 by lumedeir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3
BUILD = ./objs/
SRC =	ft_isalpha.c ft_isascii.c \
		ft_isalnum.c ft_isdigit.c ft_isprint.c \
		ft_tolower.c ft_toupper.c ft_atol.c \
		ft_atoi.c ft_bzero.c ft_calloc.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c \
		ft_strchr.c ft_strdup.c ft_strlcat.c \
		ft_strlcpy.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_strlen.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c \
		get_next_line.c ft_printf.c \
		ft_convert_to_char.c ft_itoa_base.c \
		ft_convert_to_decimal.c \
		ft_convert_to_str.c \
		ft_convert_to_udecimal.c ft_convert_to_uphexa.c \
		ft_convert_to_lowhexa.c \
		ft_unsigned_itoa.c \
		ft_convert_to_pointer.c \

OBJ = $(addprefix $(BUILD), $(SRC:.c=.o))

all: $(NAME)

$(NAME) : $(OBJ)
		@ar -rcs $(NAME) $(OBJ)
$(BUILD)%.o:%.c
		@mkdir -p $(BUILD) 
		@$(CC) $(CFLAGS) -c $< -o $@
clean:
		@rm -rf $(BUILD)
fclean: clean
		@rm -f libft.a
re: fclean all
.PHONY: all clean fclean re
