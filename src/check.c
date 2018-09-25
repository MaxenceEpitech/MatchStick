/*
** check.c for check in /home/Max/Documents/delivery/CPE_2016_matchstick/src
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Mon Jul  3 21:24:18 2017 fourrier maxence
** Last update Wed Jul 12 15:46:15 2017 fourrier maxence
*/

#include "my.h"

int	check_ret(int ret, int line, int **map)
{
  int	i;
  int	has;

  if (ret >= line || ret < 0)
    return (print_ret(ERROR_RANGE, -1));
  i = 0;
  has = 0;
  while (map[ret][i] != -1)
    {
      if (map[ret][i] == 1)
        has = 1;
      i++;
    }
  if (has == 0)
    return (print_ret(ERROR_ENOUGHT, -1));
  return (0);
}

int	check_entry(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (!(str[i] >= '0' && str[i] <= '9'))
	return (print_ret(ERROR_NUMBER, -1));
      i++;
    }
  if (i > 5)
    return (print_ret(ERROR_NUMBER, -1));
  return (0);
}

int	contain_pipe(int **map)
{
  int	y;
  int	x;

  y = 0;
  while (map[y])
    {
      x = 0;
      while (map[y][x] != -1)
        {
          if (map[y][x] == 1)
            return (1);
          x++;
        }
      y++;
    }
  return (0);
}

int	nb_matches_line(int **map, int p_line)
{
  int	i;
  int	cpt;

  i = 0;
  cpt = 0;
  while (map[p_line][i] != -1)
    {
      if (map[p_line][i] == 1)
	cpt++;
      i++;
    }
  return (cpt);
}
