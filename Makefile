# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dde-sott <dde-sott@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 19:21:05 by dde-sott          #+#    #+#              #
#    Updated: 2022/11/09 20:54:38 by dde-sott         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Name of the project
NAME = libft.a

#.c files
SOURCE = ft_strlen ft_isalnum ft_isalpha \
           ft_isascii ft_isdigit ft_isprint \
           ft_memcpy ft_memset ft_strlcpy \
           ft_strlen ft_strlcat ft_strrchr \
           ft_atoi ft_memmove ft_bzero \
           ft_calloc ft_memchr ft_memcmp \
           ft_strchr ft_strdup ft_strjoin \
           ft_strncmp ft_substr ft_tolower \
           ft_toupper ft_putchar_fd ft_putstr_fd \
           ft_putendl_fd

#transformar os ficheiros em ficheiro .c
C_SOURCE = $(SOURCE:%=%.c)

#Já estou a transformar nos comando embaixo
#O_FILES = $(SOURCE:.c=.o) 

#.h files Poderia usar o wildcard e buscar todos os ficheiros .h
#H_SOURCE = libft.h

#Object files para transformar todos os ficheiros .c para .o?
O_FILES = $(C_SOURCE:.c=.o)

#Compiler
CC = gcc
CC_FLAGS = -Wall\
           -Werror\
           -Wextra

all: $(NAME)

$(NAME):
	$(CC) $(CC_FLAGS) -c $(C_SOURCE) -I./
	ar -rc $(NAME) $(O_FILES)

clean:
	rm -f $(O_FILES)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)
