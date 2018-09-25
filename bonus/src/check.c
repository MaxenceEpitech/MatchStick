/*
** check.c for check in /home/Max/Documents/delivery/CPE_2016_matchstick/src
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Mon Jul  3 21:24:18 2017 fourrier maxence
** Last update Sun Jul 16 12:45:49 2017 fourrier maxence
*/

#include "my.h"

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
