/*
** my_putstr.c for my_putstr in /home/maxence.fourrier/CPool_Day04
** 
** Made by Maxence Fourrier
** Login   <maxence.fourrier@epitech.net>
** 
** Started on  Thu Mar  2 09:09:52 2017 Maxence Fourrier
** Last update Mon Apr  3 10:31:09 2017 fourrier maxence
*/

#include "my.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
