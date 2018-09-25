/*
** my_strcmp.c for my_strcmp in /home/maxence.fourrier/CPool_Day06
** 
** Made by Maxence Fourrier
** Login   <maxence.fourrier@epitech.net>
** 
** Started on  Mon Mar  6 18:06:00 2017 Maxence Fourrier
** Last update Mon Apr  3 10:26:29 2017 fourrier maxence
*/

#include "my.h"

int	my_str_who_bigger(char *s1, char *s2)
{
  int	i;
  int	y;

  i = 0;
  y = 0;
  while (s1[i] != '\0')
    i++;
  while (s2[y] != '\0')
    y++;
  if (y == i)
    return (0);
  if (y > i)
    return (i - y);
  if (i > y)
    return (i - y);
}
