/*
** matchstick.c for matchstick in /home/Max/Documents/delivery/CPE_2016_matchstick/src
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Mon Jul  3 09:38:40 2017 fourrier maxence
** Last update Wed Jul 12 14:40:07 2017 fourrier maxence
*/

#include "my.h"

int	game(int **map, int line, int size)
{
  if (player_turn(map, line, size) == -1)
    return (-1);
  print_map(map, line);
  if (contain_pipe(map) == 0)
    return (2);
  if (ia_turn(map, line, size) == -1)
    return (-1);
  print_map(map, line);
  if (contain_pipe(map) == 0)
    return (1);
  return (0);
}

int	matchstick(int line, int size)
{
  int	**map;
  int	ret;

  if (line < 1 || line > 100 || size < 1
      || (map = create_map(line)) == NULL)
    return (-1);
  print_map(map, line);
  ret = 0;
  while (ret == 0)
    if ((ret = game(map, line, size)) == -1)
      return (0);
  print_winner(ret);
  clear_ressource(map);
  return (ret);
}
