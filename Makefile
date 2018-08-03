##
## EPITECH PROJECT, 2017
## makefile mypopup
## File description:
## fff
##

SRC	=	src/sokoban.c		\
		src/my_strlen.c		\
		src/moving.c		\
		src/box.c		\
		src/my_putstr.c		\
		src/objective.c		\
		src/my_putchar.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -lncurses

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
