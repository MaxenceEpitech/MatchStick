/*
** my_int_to_str.c for my_int_to_str in /home/Max/Documents/delivery/PSU_2016_my_ls/lib/my
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Wed Apr 19 10:31:43 2017 fourrier maxence
** Last update Thu May 11 09:50:33 2017 fourrier maxence
*/

#include "my.h"

char		*my_int_to_str(int nb)
{
  int		i;
  char		*str;

  i = 0;
  if ((str = malloc(sizeof(char) * 10)) == NULL)
    return (NULL);
  if (nb < 0)
    {
      str[i] = '-';
      i++;
    }
  while (nb != 0)
    {
      str[i] = nb % 10 + 48;
      nb = nb / 10;
      i++;
    }
  str[i] = '\0';
  str = my_revstr(str);
  return (str);
}
