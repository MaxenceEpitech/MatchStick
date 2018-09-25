/*
** my_print_list.c for my_print_list.c in /home/maxence.fourrier/lib/my
** 
** Made by Maxence Fourrier
** Login   <maxence.fourrier@epitech.net>
** 
** Started on  Tue Mar 14 11:20:00 2017 Maxence Fourrier
** Last update Mon Apr  3 10:38:44 2017 fourrier maxence
*/

#include "my.h"

void		my_print_list(t_list *liste)
{
  t_list	*tmp;

  tmp = liste;
  while (tmp != NULL)
    {
      my_putstr(tmp->data);
      tmp = tmp->next;
    }
}
