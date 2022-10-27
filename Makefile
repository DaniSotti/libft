CC = gcc
CFLAGS = -Wall -Werror -Wextra
OBJ = func

all:
	$(CC) $(CFLAGS) "colocar os nomes das funcoes" -o $(OBJ)

clean:
	rm -rf libft
	rm -rf a.out

NAME, all, clean, fclean, re