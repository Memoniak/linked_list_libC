##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make file to compile
##

ECHO	=	/bin/echo -e
DEFAULT	=	"\033[00m"
#SHELL  =       "\e[0;0m"

DEFAULT =       "\e[0m"
BOLD	=       "\e[1m"
DIM		=       "\e[2m"
UNDLN	=       "\e[4m"
SHINE   =       "\e[5;37m"
RODE    =       "\e[9;30m"
IDK		=       "\e[5;37m"

BLACK	=       "\e[30m"
RED		=       "\e[31m"
GREEN	=       "\e[32m"
YELLOW	=       "\e[33m"
BLUE	=       "\e[34m"
MAGENTA	=       "\e[35m"
CYAN	=       "\e[36m"
WHITE	=       "\e[37m"

LIGHT_GREY      =       "\e[90m"
LIGHT_RED       =       "\e[91m"
LIGHT_GREEN     =       "\e[92m"
LIGHT_YELLOW    =       "\e[93m"
LIGHT_BLUE      =       "\e[94m"
LIGHT_MAGENTA   =       "\e[95m"
LIGHT_CYAN      =       "\e[96m"

CFLAGS	+=	-I./include

SRCDIR	=	src/

CREATEDIR	=	$(SRCDIR)creating/

ERRORDIR	=	$(SRCDIR)error_handling/

PRINTDIR	=	$(SRCDIR)printing/

HANDLEDIR	=	$(SRCDIR)handling/

FREEDIR		=	$(SRCDIR)freeing/


SRC	=	$(CREATEDIR)create_circ_list.c		\
		$(CREATEDIR)create_linked_list.c	\
											\
											\
		$(FREEDIR)free_linked_list.c		\
											\
		$(HANDLEDIR)get_list_size.c			\
		$(ERRORDIR)malloc_error.c			\
											\
		$(PRINTDIR)print_linked_list.c		\
		$(PRINTDIR)print_circ_list.c

OBJ	=	$(SRC:.c=.o)

NAME	=	liblinked.a

TEST_NAME	=	linkedList_tests

TESTFLAGS	=	--coverage -lcriterion -I./include -L. -llinked

TESTFILE	=	tests/test_lib.c

INCLUDE_NAME	=	linked_list.h

LIBDIR	=	./

all:	$(NAME)

$(NAME):	$(OBJ)
		@ar rc $(NAME) $(OBJ)

%.o	:	%.c
		@gcc -g -c -o $@ $^ $(CFLAGS) && $(ECHO) -n $(BOLD) $(GREEN)"  [OK] "$(WHITE) && $(ECHO) $(BOLD) $< | rev | cut -d'/' -f 1 | rev

test:	$(NAME)
		@gcc -g -o $(TEST_NAME) $(TESTFILE) $(TESTFLAGS)

clean:
		@rm -f $(OBJ)
		@($(ECHO) $(BOLD) $(GREEN)✓" CLEAN "$(NAME)$(DEFAULT))

fclean:
		@rm -f $(OBJ)
		@rm -f $(BINDIR)$(NAME)
		@rm -f $(TEST_NAME)
		@rm -f *.gcno
		@rm -f *.gcda
		@($(ECHO) $(BOLD) $(GREEN)✓" FCLEAN "$(NAME)$(DEFAULT))

re:	fclean all
