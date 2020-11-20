SRC     =      	./lib/my/opp.c	\
                ./lib/my/my_putstr.c	\
				./lib/my/my_strlen.c 	\
				./lib/my/my_getnbr.c   \

OBJ		=	$(SRC:.c=.o)

NAME	=	libmy.a

NAME2	= 	./lib/my/my.h

all:	compil_lib compil_my

compil_lib:	$(OBJ)
		ar rc $(NAME) $(OBJ)

compil_my:
		cp $(NAME2) ./include
		chmod +x libmy.a
		gcc -o bsq bsq.c libmy.a
		chmod +x bsq
		

clean:
		rm -f $(OBJ)

fclean:	clean
		rm libmy.a
		rm include/my.h
		rm bsq


re: fclean all

