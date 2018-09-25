##
## Makefile for makefile in /home/Max/Documents/delivery/CPE_year_Pushswap
## 
## Made by fourrier maxence
## Login   <maxence.fourrier@epitech.eu>
## 
## Started on  Tue Apr 11 10:05:45 2017 fourrier maxence
## Last update Sun Jul 16 14:59:05 2017 fourrier maxence
##

NAME		= 	matchstick

CC		= 	gcc

RM		= 	rm -f

SRCS_DIR	= 	./src/

SRCS		=	$(SRCS_DIR)main.c			\
			$(SRCS_DIR)tools.c			\
			$(SRCS_DIR)player_turn.c		\
			$(SRCS_DIR)draw.c			\
			$(SRCS_DIR)ia_turn.c			\
			$(SRCS_DIR)check.c			\
			$(SRCS_DIR)init.c			\
			$(SRCS_DIR)print.c			\
			$(SRCS_DIR)create_map.c			\
			$(SRCS_DIR)create_pixel_buffer.c	\
			$(SRCS_DIR)my_framebuffer_create.c	\
			$(SRCS_DIR)my_put_pixel.c		\
			$(SRCS_DIR)create_windows.c		\
			$(SRCS_DIR)clear.c			\
			$(SRCS_DIR)matchstick.c

OBJS		= 	$(SRCS:.c=.o)

CFLAGS		+= 	-I./include

LDFLAGS		+=	-L./lib/my -lmy -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all		:	$(NAME)

$(NAME)		: 	$(OBJS)
			make -C ./lib/my
			$(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(LDFLAGS)

clean		:
			make clean -C ./lib/my
			$(RM) $(OBJS)

fclean		:	clean
			make fclean -C ./lib/my
			$(RM) $(NAME)

re		:	fclean all

.PHONY		: 	all clean fclean re
