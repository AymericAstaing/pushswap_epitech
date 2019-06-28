##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## CPE_pushswap__2018
##

#	Root path
ROOT		=		./

#	Sources path
F_SRC		=		$(ROOT)src/

#	Binary name
NAME		=		push_swap

SRC		=		$(F_SRC)main.c

SRC		+=		$(F_SRC)utils/my_putstr.c			\
				$(F_SRC)utils/check_sorted.c			\
				$(F_SRC)utils/my_strcmp.c			\
				$(F_SRC)utils/init_linkedlist.c			\
				$(F_SRC)utils/show_list.c			\
				$(F_SRC)utils/my_getnbr.c			\
				$(F_SRC)utils/reverse_list.c			\
				$(F_SRC)utils/get_lenght.c			\
				$(F_SRC)utils/check_flag.c			\
				$(F_SRC)utils/print_step.c			\
				$(F_SRC)utils/my_putchar.c

SRC		+=		$(F_SRC)swap/pab.c				\
				$(F_SRC)swap/sab.c				\
				$(F_SRC)swap/sc.c
					
SRC		+=		$(F_SRC)sort/sort.c				\
				$(F_SRC)sort/is_superior.c			\
				$(F_SRC)utils/linked_sorted.c

#	Compile every source file to .o
OBJ		=		$(SRC:.c=.o)

#	Compiler
CC		=		cc

#	Compilation flags
CFLAGS		+=		-Wall -Werror -Wextra -pedantic -std=gnu99	\
				-I $(ROOT)include/

#	Libraries links
# LDFLAGS		+=		-L $(ROOT)lib/ -l my

#	Call compilation rule
all:				$(NAME)

#	Compile every file then pack them all !
$(NAME):			$(OBJ)
				$(CC) -o $(NAME) $(CFLAGS) $(OBJ) $(LDFLAGS)

#	Compile with g3 flag
debug:				fclean $(OBJ)
				$(CC) -o $(NAME) $(CFLAGS) -g3 $(OBJ) $(LDFLAGS)

#	Clean object type sources
clean:
				rm -f $(OBJ)

#	Clean binary
fclean:					clean
				rm -f $(NAME)

#	Clean all then compile
re:				fclean all

.PHONY:				all clean fclean re

