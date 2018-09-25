/*
** my_revstr.c for my_revstr in /home/maxence.fourrier/CPool_Day06
** 
** Made by Maxence Fourrier
** Login   <maxence.fourrier@epitech.net>
** 
** Started on  Mon Mar  6 09:57:20 2017 Maxence Fourrier
** Last update Mon Apr  3 10:32:27 2017 fourrier maxence
*/

#include "my.h"

char	*my_revstr(char *str)
{
  int	i;
  int	y;
  char	*c;

  c = malloc(sizeof(char) * (my_strlen(str) + 1));
  i = 0;
  while (str[i] != '\0')
    {
      c[i] = str[i];
      i++;
    }
  y = 0;
  while (str[y] != '\0')
    {
      str[y] = c[i - 1];
      i--;
      y++;
    }
  return (str);
}
