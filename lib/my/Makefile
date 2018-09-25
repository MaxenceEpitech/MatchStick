##
## Makefile for makefile in /home/Max/Documents/delivery/CPE_year_Pushswap
## 
## Made by fourrier maxence
## Login   <maxence.fourrier@epitech.eu>
## 
## Started on  Tue Apr 11 10:05:45 2017 fourrier maxence
## Last update Tue Apr 25 13:49:04 2017 fourrier maxence
##

NAME	= libmy.a

CC	= gcc

AR	= ar rc

RM	= rm -f

SRCS	= my_swap.c			\
	  my_decimal_to_hexa.c		\
	  my_decimal_to_octal.c		\
	  my_int_to_str.c		\
	  my_link_list.c		\
	  my_list_contains.c		\
	  my_list_cpy.c			\
	  my_list_is_empty.c		\
	  my_list_size.c		\
	  my_print_list.c		\
	  my_putchar.c			\
	  my_putnbr.c			\
	  my_putstr.c			\
	  my_putstr_error.c		\
	  my_rev_list.c			\
	  my_revstr.c			\
	  my_strcmp.c			\
	  my_strcpy.c			\
	  my_strlen.c			\
	  my_str_maj.c			\
	  my_str_to_int.c		\
	  my_str_who_bigger.c		\
	  supp_0.c

OBJS	= $(SRCS:.c=.o)

CFLAGS	+= -I../../include/

all: $(NAME)

$(NAME): $(OBJS)
	 $(AR) $(NAME) $(OBJS)
	 ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
