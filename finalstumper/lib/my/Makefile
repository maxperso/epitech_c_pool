##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile of libmy
##

SRC	=	mini_printf.c \
		my_put_nbr.c	\
		my_putchar.c	\
		my_putstr.c	\
		my_str_to_word_array.c	\
		my_strcmp.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME).a $(OBJ)

clean:
		find -name '*.o' -delete

fclean:	clean
		find -name '$(NAME).a' -delete

re:		fclean all
