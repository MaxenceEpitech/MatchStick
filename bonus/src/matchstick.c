/*
** matchstick.c for matchstick in /home/Max/Documents/delivery/CPE_2016_matchstick/src
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Mon Jul  3 09:38:40 2017 fourrier maxence
** Last update Sun Jul 16 12:48:21 2017 fourrier maxence
*/

#include "my.h"

int	game(t_all *all, int line, int size)
{
  int	ret;

  if ((ret = player_turn(all, line, size)) != 0)
    return (ret);
  if (contain_pipe(all->map) == 0)
    return (2);
  if ((ret = ia_turn(all->map, line, size)) != 0)
    return (ret);
  if (contain_pipe(all->map) == 0)
    return (1);
  return (0);
}

int		matchstick(int line, int size)
{
  t_all		*all;
  int		ret;

  if (line < 1 || line > 100 || size < 1
      || (all = init_all(line, size)) == NULL)
    return (-1);
  ret = 0;
  sfRenderWindow_clear(all->graph->window, sfBlack);
  while (ret == 0)
    if ((ret = game(all, line, size)) != 0)
      return (ret);
  clear_ressource(all);
  return (ret);
}
