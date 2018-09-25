/*
** tools.c for tools in /home/Max/Documents/src
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Tue May 16 10:17:17 2017 fourrier maxence
** Last update Tue Jul 11 13:26:35 2017 fourrier maxence
*/

#include "my.h"

int	line_pipe(int *line)
{  
  int	i;
  int	cpt;

  cpt = 0;
  i = 0;
  while (line[i] != -1)
    {
      if (line[i] == 1)
	cpt++;
      i++;
    }
  return (cpt);
}

int	int_len(int *line)
{
  int	i;

  i = 0;
  while (line[i] != -1)
    i++;
  return (i);
}

int	check_arg(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (!(str[i] >= '0' || str[i] <= '9'))
	return (-1);
      i++;
    }
  if (i > 6)
    return (-1);
  return (0);
}

int	my_len(int *line)
{
  int	i;
  int	cpt;

  cpt = 0;
  i = 0;
  while (line[i] != -1)
    {
      if (line[i] == 0)
	cpt++;
      i++;
    }
  return (cpt);
}

int	**remove_matches(int **map, int line, int nb)
{
  int	i;

  i = nb_matches_line(map, line) - 1;
  if (i < 0 || nb <= 0)
    return (map);
  while (nb > 0)
    {
      map[line][i] = 0;
      nb--;
      i--;
    }
  return (map);
}
