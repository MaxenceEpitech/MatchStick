/*
** print_map.c for print_map in /home/Max/Documents/delivery/CPE_2016_matchstick/src
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Tue Jul  4 09:30:29 2017 fourrier maxence
** Last update Tue Jul 11 15:03:06 2017 fourrier maxence
*/

#include "my.h"

void	print_center_map(int **map, int line, int y)
{
  int	x;

  x = 0;
  if (nb_matches_line(map, y) != 0)
    {
      print_space(line - (y + 1));
      while (map[y][x] != -1)
	{
	  if (map[y][x] == 1)
	    my_putchar('|');
	  x++;
	}
      print_space(line - (y + 1) + my_len(map[y]));
    }
  else
    print_space(line * 2 - 1);
}

void	print_remove(int line, int matches)
{
  my_putstr(P_REMOVE_1);
  my_putnbr(matches);
  my_putstr(P_REMOVE_2);
  my_putnbr(line + 1);
  my_putchar('\n');
}

void	print_winner(int winner)
{
  if (winner == 1)
    my_putstr(P_WIN);
  else
    my_putstr(AI_WIN);
}

int	print_ret(char *str, int ret)
{
  my_putstr_error(str);
  return (ret);
}

int	print_max_match(int ret, int match)
{
  my_putstr_error(ERROR_MAX_1);
  my_putnbr(match);
  my_putstr_error(ERROR_MAX_2);  
  return (ret);
}
