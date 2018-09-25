/*
** my_decimal_to_hexa.c for my_decimal_to_hexa in /home/Max/Documents/lib/my
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Wed Apr  5 19:24:24 2017 fourrier maxence
** Last update Wed Apr  5 19:51:03 2017 fourrier maxence
*/

#include "my.h"

char	*my_decimal_to_hexa_in_boucle(char *res, int nb, int i)
{
  if (nb % 16 == 10)
    res[i] = 'A';
  else if (nb % 16 == 11)
    res[i] = 'B';
  else if (nb % 16 == 12)
    res[i] = 'C';
  else if (nb % 16 == 13)
    res[i] = 'D';
  else if (nb % 16 == 14)
    res[i] = 'E';
  else if (nb % 16 == 15)
    res[i] = 'F';
  else if (nb % 16 < 10)
    res[i] = nb % 16 + 48;
  return (res);
}

char	*my_decimal_to_hexa(int nb)
{
  char	*res;
  int	i;

  i = 0;
  res = malloc(sizeof(char) * 20);
  if (res == NULL)
    return (NULL);
  if (nb <= 0)
    {
      res[0] = '0';
      i++;
    }
  while (nb >= 1)
    {
      res = my_decimal_to_hexa_in_boucle(res, nb, i);
      nb = nb / 16;
      i++;
    }
  res[i] = '\0';
  if (res[0] != '0' && res[1] != '\0')
    res = my_revstr(res);
  return (res);
}
