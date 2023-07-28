##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	my_put_char_str.c	\
		open_map.c	\
		main.c	\
		lines_cols.c	\
		double_tab.c	\
		my_put_nbr.c	\
		my_getnbr.c	\
		my_strlen.c	\
		my_final_map.c	\
		generator.c	\
		my_algo.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -Wall -Wextra

clean:
	rm -f $(OBJ)

fclean:	clean
	-rm -f $(NAME)

re:	fclean all
