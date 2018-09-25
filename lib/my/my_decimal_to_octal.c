/*
** my_decimal_to_octal.c for my_decimal_to_octal in /home/Max/Documents/lib/my
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Wed Apr  5 19:02:42 2017 fourrier maxence
** Last update Mon Apr 24 14:28:15 2017 fourrier maxence
*/

#include "my.h"

int	my_decimal_to_octal(int	nb)
{
  int	res;
  int	i;

  i = 10;
  if (nb < 0)
    return (-1);
  res = nb % 8;
  nb = nb / 8;
  while (nb >= 1)
    {
      res = res + ((nb % 8) * i);
      nb = nb / 8;
      i = i * 10;
    }
  return (res);
}
