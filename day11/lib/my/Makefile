##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

SRC    =        my_strncpy.c    \
        my_putchar.c    \
        my_str_isprintable.c    \
        my_put_nbr.c    \
        my_str_islower.c    \
        my_showmem.c    \
        my_strncat.c    \
        my_isneg.c    \
        my_swap.c    \
        my_strupcase.c    \
        my_strcat.c    \
        my_str_isalpha.c    \
        my_strcapitalize.c    \
        my_getnbr.c    \
        my_is_prime.c    \
        my_compute_square_root.c    \
        my_str_isnum.c    \
        my_strstr.c    \
        my_putstr.c    \
        my_strncmp.c    \
        my_str_isupper.c    \
        my_strdup.c     \
        my_strcmp.c     \
        my_revstr.c     \
        my_strlen.c     \
        my_str_to_word_array.c  \
        my_compute_power_rec.c

OBJ  = $(SRC:.c=.o)

NAME = libmy.a

MY = my.h

DIRECTORY = ../../include

all: $(NAME)

$(NAME):        $(OBJ)
		ar rc $(NAME) $(OBJ)
		cp $(NAME) ../

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)
		rm -f ../$(NAME)

re:		fclean all
