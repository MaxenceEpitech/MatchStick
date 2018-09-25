/*
** my_strlen.c for my_putstr in /home/maxence.fourrier/CPool_Day04
** 
** Made by Maxence Fourrier
** Login   <maxence.fourrier@epitech.net>
** 
** Started on  Thu Mar  2 12:07:19 2017 Maxence Fourrier
** Last update Mon Apr  3 10:33:25 2017 fourrier maxence
*/

#include "my.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}
