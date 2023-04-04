##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

SRC		=		$(wildcard src/*.c)

OBJ    =		$(SRC:.c=.o)

NAME    = 		cat

MY    =			my.h

INCLUDE    =	-I./include

CFLAGS = 		-g3

all:     $(NAME)

$(NAME):    $(OBJ)
				gcc -o $(NAME) $(OBJ) -g3 $(INCLUDE) $(LIB) -g
				@echo "\033[05m\033[44mcompilation done => ${NAME}\033[00m"

clean:
				rm -f $(OBJ)
				rm -f *~

fclean:			clean
				rm -f $(NAME)

re:				fclean all
