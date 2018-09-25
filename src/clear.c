/*
** clear.c for clear in /home/Max/Documents/delivery/CPE_2016_matchstick/src
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Tue Jul  4 10:48:38 2017 fourrier maxence
** Last update Tue Jul  4 10:54:02 2017 fourrier maxence
*/

#include "my.h"

void	clear_ressource(int **map)
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
