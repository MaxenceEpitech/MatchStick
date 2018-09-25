/*
** my_list_size.c for my_list_size in /home/maxence.fourrier/CPool_Day11/lib/my
** 
** Made by Maxence Fourrier
** Login   <maxence.fourrier@epitech.net>
** 
** Started on  Tue Mar 14 13:25:46 2017 Maxence Fourrier
** Last update Mon Apr  3 10:38:36 2017 fourrier maxence
*/

#include "my.h"

int		my_list_size(t_list *begin)
{
  int		i;
  t_list	*list;

  list = malloc(sizeof(t_list));
  list = begin;
  i = 0;
  while (list)
    {
      list = list->next;
      i++;
    }
  return (i);
}
