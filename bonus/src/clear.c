/*
** clear.c for clear in /home/Max/Documents/delivery/CPE_2016_matchstick/src
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Tue Jul  4 10:48:38 2017 fourrier maxence
** Last update Thu Jul 13 18:59:48 2017 fourrier maxence
*/

#include "my.h"

void	clear_map(int **map)
{
  int	i;

  i = 0;
  while (map[i])
    {
      free(map[i]);
      i++;
    }
  free(map);  
}

void	clear_graph(t_graph *graph)
{
  sfSprite_destroy(graph->sprite);
  sfTexture_destroy(graph->texture);
  sfRenderWindow_destroy(graph->window);
}

void	clear_ressource(t_all *all)
{
  clear_map(all->map);
  clear_graph(all->graph);
  free(all);
}
