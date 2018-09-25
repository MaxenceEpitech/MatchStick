/*
** turn.c for turn in /home/Max/Documents/delivery/CPE_2016_matchstick/src
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Mon Jul  3 15:18:48 2017 fourrier maxence
** Last update Sat Jul 15 22:40:42 2017 fourrier maxence
*/

#include "my.h"

int	get_line(int line, int **map)
{
  int	r;
  char	*str;
  int	ret;

  my_putstr(LINE);
  if ((str = get_next_line(0)) == NULL)
    return (-1);
  ret = my_str_to_int(str) - 1;
  while (check_entry(str) == -1 || check_ret(ret, line, map) == -1)
    {
      my_putstr(LINE);
      if ((str = get_next_line(0)) == NULL)
	return (-1);
      ret = my_str_to_int(str) - 1;
    }
  return (ret);
}

int	get_matches(int *p_line, int **map, int line, int size)
{
  int	r;
  char	*str;
  int	ret;

  my_putstr(MATCHES);
  if ((str = get_next_line(0)) == NULL)
    return (-1);
  ret = my_str_to_int(str);
  if (ret <= 0)
    return (print_ret(ERROR_MORE, -2));
  if (check_entry(str) == -1)
    return (-2);
  if (ret > size)
    return (print_max_match(-2, size));
  if (nb_matches_line(map, *p_line) < ret)
    return (print_ret(ERROR_ENOUGHT, -2));
  return (ret);
}

int	player_turn(int **map, int line, int size)
{
  int	p_line;
  int	p_matches;

  p_matches = -2;
  my_putstr(P_TURN);
  while (p_matches == -2)
    {
      if ((p_line = get_line(line, map)) == -1
	  || (p_matches = get_matches(&p_line, map, line, size)) == -1)
	return (-1);
    }
  map = remove_matches(map, p_line, p_matches);
  print_remove(p_line, p_matches);
  return (0);
}
