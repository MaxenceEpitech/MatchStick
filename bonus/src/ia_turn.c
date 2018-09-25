/*
** ia_turn.c for ia_turn in /home/Max/Documents/delivery/CPE_2016_matchstick/src
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Tue Jul  4 11:01:43 2017 fourrier maxence
** Last update Sun Jul 16 12:38:37 2017 fourrier maxence
*/

#include <time.h>

#include "my.h"

int	ia_turn(int **map, int line, int max)
{
  int	l;
  int	nb;

  l = rand() % (line - 1);
  while (line_pipe(map[l]) == 0)
    l = rand() % line;
  if (max >= line_pipe(map[l]))
    nb = rand() % line_pipe(map[l]) + 1;
  else
    nb = rand() % max + 1;
  map = remove_matches(map, l, nb);
  return (0);
}

 /*
int	is_pair(int **map, int line, int nb)
{
  
}

int	is_win(int **map, int max, int *line, int *nb)
{
  while (map[line] && nb >= line_pipe(map[line]) && *nb <= max)
    {
      if (is_pair(map, *line, *nb) == 1)
	return (1);
      *nb = *nb + 1;
    }
  *line = *line + 1;
  return (0);
}

int	ia_turn(int **map, int line, int max)
{
  int	ret;
  int	line;
  int	nb;

  line = 0;
  nb = 1;
  if ((ret = is_win(map, max, &line, &nb)) == -1)
    return (-1);
  while (ret == 0 && map[line])
    {
      nb = 1;
      if ((ret = is_win(map, max, &line, &nb)) == -1)
	return (-1);
    }
  if (map[line] == NULL)
    0; // supp une alumette
  else
    0; // del alumette en : line / nb
  return (0);
}
 */
