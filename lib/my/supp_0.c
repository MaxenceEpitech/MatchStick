/*
** supp_0.c for supp_0 in /home/Max/Documents/delivery/CPE_year_Pushswap/lib/my
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Mon Apr  3 23:04:59 2017 fourrier maxence
** Last update Tue Apr  4 09:55:29 2017 fourrier maxence
*/

#include "my.h"

char	*supp_0(char *str)
{
  int	i;
  int	y;
  char	*new;

  i = 0;
  y = 0;
  new = malloc(sizeof(char) * (my_strlen(str) + 1));
  if (new == NULL)
    return (NULL);
  if (str[0] == '-')
    {
      new[0] = '-';
      i++;
      y++;
    }
  while (str[i] == '0')
    i++;
  while (str[i] != '\0')
    {
      new[y] = str[i];
      i++;
      y++;
    }
  new[i] = '\0';
  return (new);
}
