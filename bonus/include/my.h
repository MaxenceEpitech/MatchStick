/*
** my.h for include in /home/Max/Documents/include
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Sat May 13 10:23:04 2017 fourrier maxence
** Last update Tue Jul 18 09:51:08 2017 fourrier maxence
*/

#ifndef _MY_H_
# define _MY_H_

/*
** __ Include __
*/

# include <stdlib.h>
# include <unistd.h>
# include <SFML/Graphics.h>
# include <SFML/Audio.h>

/*
** __ Define __
*/

# define NB_SPRITE	10

# define READ_SIZE	4096
# define SCREEN_WIDTH   2000
# define SCREEN_HEIGHT  1000
# define SCREEN_NAME    "MatchStick"

/*
**		__ Error Message __
*/

# define OPEN_MSG	"Open error.\n"

# define READ_MSG	"Read error.\n"

# define MALLOC_MSG	"Malloc error of : "
# define MALLOC_CHAR	"char.\n"
# define MALLOC_LIST	"t_list.\n"

/*
**		__ Returns Values __
*/

# define EXIT_USAGE	84
# define EXIT_MALLOC	84
# define EXIT_READ	84
# define EXIT_OPEN	84

# define EXIT_SUCCESS	0

/*
** __ T_list __
*/

typedef struct          s_my_framebuffer
{
  sfUint8               *pixels;
  int                   width;
  int                   height;
}                       t_my_framebuffer;

typedef struct          s_graph
{
  sfRenderWindow        *window;
  t_my_framebuffer      *framebuffer;
  sfTexture             *texture;
  sfSprite              *sprite;
  sfEvent		event;
}                       t_graph;

typedef struct		s_all
{
  t_graph		*graph;
  int			**map;
  sfSprite		**sprite;
  sfVector2i		space;
  int			line;
}			t_all;

typedef struct		s_list
{
  char			*data;
  struct s_list		*next;
}			t_list;

/*
** __ Graph __
*/

sfRenderWindow          *create_window(char *name, int width, int height);
sfUint8*                create_pixel_buffer(int width, int height);
t_my_framebuffer        *my_framebuffer_create(int width, int height);
void			my_put_pixel(t_my_framebuffer *framebuffer,
				     int y, int x, sfColor color);

/*
** __ MatchStick __
*/

void		clear_window(t_all *);
void		reload(t_all *);
void		draw_all(t_all *, int);

sfSprite	*load_picture(char *);
sfSprite	**init_sprite();
t_graph		*init_graph();
t_all		*init_all(int, int);

char		*get_next_line(const int fd);

void		clear_map(int **);
void		clear_graph(t_graph *);
void		clear_ressource(t_all *);

int		contain_pipe(int **);
int		nb_matches_line(int **, int);

int		is_pair(int **map, int line, int nb);
int		is_win(int **map, int, int *, int *);
int		ia_turn(int **, int, int);

void		undo(t_all *, int);
int		change_matchestick(t_all *, sfVector2i);
int		check_pos(t_all *, int, sfVector2i);
int		player_turn(t_all *, int, int);

void		usage();
void		bad_usage();

int		line_pipe(int *);
int		int_len(int *);
int		check_arg(char *);
int		my_len(int *);
int		**remove_matches(int **, int, int);

int		**create_map(int);

int		game(t_all *, int, int);
int		matchstick(int, int);

/*
** __ Lib __
*/

t_list	*my_rev_list(t_list *list);
t_list	*my_link_list(t_list *list, char *data);
t_list	*my_list_cpy(t_list *list);
int	my_list_size(t_list *begin);
int	my_list_is_empty(t_list *liste);
void	my_print_list(t_list *liste);

int	my_decimal_to_octal(int nb);
int	my_strlen(char *str);
int	my_str_who_bigger(char *s1, char *s2);
int	my_str_to_int(char *str);
int	my_strcmp(char *a, char *b);
int	my_swap(int *a, int *b);

void	my_putstr_error(char *str);
void	my_putnbr(int nb);
void	my_putchar(char a);
void	my_putstr(char *str);

char	*my_int_to_str(int nb);
char	*my_str_maj(char *str);
char	*my_decimal_to_hexa(int nb);
char	*supp_0(char *str);
char	*my_revstr(char *str);
char	*my_strcpy(char *dest, char *src);

#endif /* !__MY_H_ */
