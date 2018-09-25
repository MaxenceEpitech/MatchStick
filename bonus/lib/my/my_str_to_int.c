/*
** my_str_to_nbr.c for my_str_to_nbr in /home/Max/Documents/delivery/CPE_year_Pushswap/lib/my
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Mon Apr  3 21:23:33 2017 fourrier maxence
** Last update Wed Jul 12 15:44:59 2017 fourrier maxence
*/

#include "my.h"

int	my_str_to_int(char *str)
{
  int	i;
  int	res;

  res = 0;
  i = 0;
  if (str[0] == '-')
    i++;
  while (str[i] != '\0' && str[i] != '\n')
    {
      res = res * 10 + (str[i] - 48);
      i++;
    }
  if (str[0] == '-')
    res = res * -1;
  return (res);
}
