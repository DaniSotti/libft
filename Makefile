#Name of the project
NAME=libft

#.c files
C_SOURCE=$(wildcard *.c)

#.h files Poderia usar o wildcard e buscar todos os ficheiros .h
H_SOURCE=libft.h

#Object files para transformar todos os ficheiros .c para .o?
OBJ=$(C_SOURCE:.c=.o)

#Compiler
CC_FLAGS=-Wall\
         -Werror\
		 -Wextra

all: $(NAME)
	$(CC) $(CC_FLAGS) -o $(C_SOURCE) $(OBJ)

#clean:
#	rm -f $(NAME)
#	rm -f $(OBJ) 

#re: fcleanall
