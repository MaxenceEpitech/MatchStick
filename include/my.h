/*
** my.h for include in /home/Max/Documents/include
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Sat May 13 10:23:04 2017 fourrier maxence
** Last update Sun Jul 16 23:37:58 2017 fourrier maxence
*/

#ifndef _MY_H_
# define _MY_H_

/*
** __ Include __
*/

# include <stdlib.h>
# include <unistd.h>

/*
** __ Define __
*/

# define READ_SIZE	4096

/*
**		__ Information Message __
*/

# define P_TURN		"Your turn:\n"
# define P_REMOVE_1	"Player removed "
# define P_REMOVE_2	" match(es) from line "
# define P_WIN		"I lost... snif... but I'll get you next time!!\n"
# define AI_TURN	"AI's turn...\n"
# define AI_REMOVE_1	"AI removed "
# define AI_REMOVE_2	" match(es) from line "
# define AI_WIN		"You lost, too bad...\n"
# define MATCHES	"Matches: "
# define LINE		"Line: "

/*
**		__ Error Message __
*/

# define OPEN_MSG	"Open error.\n"

# define READ_MSG	"Read error.\n"

# define MALLOC_MSG	"Malloc error of : "
# define MALLOC_CHAR	"char.\n"
# define MALLOC_LIST	"t_list.\n"

# define ERROR_RANGE	"Error: this line is out of range\n"
# define ERROR_NUMBER	"Error: invalid input (positive number expected)\n"
# define ERROR_ENOUGHT	"Error: not enough matches on this line\n"
# define ERROR_MAX_1	"Error: you cannot remove more than "
# define ERROR_MAX_2	" matches per turn\n"
# define ERROR_MORE	"Error: you have to remove at least one match\n"

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

typedef struct		s_list
{
  char			*data;
  struct s_list		*next;
}			t_list;

/*
** __ MatchStick __
*/

char    *get_next_line(const int fd);

void	clear_ressource(int **);

int	contain_pipe(int **);
int	check_entry(char *);
int	check_ret(int, int, int **);
int	nb_matches_line(int **, int);

int	is_pair(int **map, int line, int nb);
int	is_win(int **map, int, int *, int *);
int	ia_turn(int **, int, int);

int	get_line(int, int **);
int	get_matches(int *, int **, int, int);
int	player_turn(int **, int, int);

void	usage();
void	bad_usage();
void	print_line(int);
void	print_map(int **, int);
void	print_space(int);

void	print_center_map(int **, int, int);
void	print_remove(int, int);
void	print_winner(int);
int	print_ret(char *, int);
int	print_max_match(int, int);

int	line_pipe(int *);
int	int_len(int *);
int	check_arg(char *);
int	my_len(int *);
int	**remove_matches(int **, int, int);

int	**create_map(int);

int	game(int **map, int, int);
int	matchstick(int, int);

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
