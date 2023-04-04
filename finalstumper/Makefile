##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile of cat
##

SRC	=	$(wildcard src/*.c)

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I include/

LDFLAGS	=	-L lib/my/ -lmy

OBJ	=	$(SRC:.c=.o)

NAME	=	rush3

all:	$(NAME)

$(NAME):	$(OBJ)
		$(MAKE) -C lib/my/
		gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
		find -name '*.o' -delete
		$(MAKE) -C lib/my/ clean

fclean:	clean
		find -name '$(NAME)' -delete
		$(MAKE) -C lib/my/ fclean

re:		fclean all
		$(MAKE) -C lib/my/ re
