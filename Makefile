##
## ETNA PROJECT, 29/03/2021 by pouny_j
## Static Library & libmy
## File description:
##      Library for my_crd project
##

CC      =   gcc

NAME    =   my_crd

SRC_FILE=   insert_key.c            \
            lookup_cmd.c            \
            my_getnbr.c             \
            my_putchar.c            \
            my_readline.c           \
            my_str_to_word_array.c  \
            removal_node.c          \
            display_null.c          \
            display_value.c         \
            my_crd.c                \
            my_putnbr.c

H_FILE  =   ./lib/my

SRCF 	=	$(addprefix lib/my/, $(SRC_FILE))

OBJ     =   $(SRCF:%.c=%.o)

COMP    =   -Wall -Wextra -Werror -std=c11

RM      =   rm -f

$(NAME) :   $(OBJ)
		    $(CC) $(COMP) $(OBJ) -o $(NAME) -I $(H_FILE)

all     :   $(NAME)

clean   :   $(RM) $(OBJ)

fclean  :   clean

re      :   fclean all
