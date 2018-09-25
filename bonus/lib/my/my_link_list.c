/*
** my_link_list.c for my_link_list in /home/maxence.fourrier/lib/my
** 
** Made by Maxence Fourrier
** Login   <maxence.fourrier@epitech.net>
** 
** Started on  Tue Mar 14 23:20:05 2017 Maxence Fourrier
** Last update Mon Apr  3 22:37:50 2017 fourrier maxence
*/

#include "my.h"

t_list		*my_link_list(t_list *list, char *data)
{
  t_list	*tmp;

  tmp = malloc(sizeof(t_list));
  if (tmp)
    {
      tmp->data = data;
      tmp->next = list;
    }
  return (tmp);
}
