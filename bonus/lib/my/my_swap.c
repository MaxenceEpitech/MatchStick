/*
** my_swap.c for my_swap in /home/maxence.fourrier/CPool_Day04
** 
** Made by Maxence Fourrier
** Login   <maxence.fourrier@epitech.net>
** 
** Started on  Thu Mar  2 09:09:18 2017 Maxence Fourrier
** Last update Mon Apr 24 14:26:50 2017 fourrier maxence
*/

#include "my.h"

int	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
  return (0);
}
