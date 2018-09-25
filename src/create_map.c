/*
** create_map.c for create_map in /home/Max/Documents/delivery/CPE_2016_matchstick/src
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Mon Jul  3 13:54:47 2017 fourrier maxence
** Last update Mon Jul  3 14:51:47 2017 fourrier maxence
*/

#include "my.h"

int	**create_map(int size)
{
  int	**map;
  int	i;
  int	cpt;

  if ((map = malloc(sizeof(int*) * (size + 1))) == NULL)
    return (NULL);
  i = 0;
  while (i < size)
    {
      if ((map[i] = malloc(sizeof(int) * ((i + 1) * 2))) == NULL)
	return (NULL);
      cpt = 0;
      while (cpt < ((i + 1) * 2) - 1)
	{
	  map[i][cpt] = 1;
	  cpt++;
	}
      map[i][cpt] = -1;
      i++;
    }
  map[i] = NULL;
  return (map);
}
