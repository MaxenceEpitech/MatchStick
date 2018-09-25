/*
** my_list_is_empty.c for my_list_is_empty in /home/maxence.fourrier/lib/my
** 
** Made by Maxence Fourrier
** Login   <maxence.fourrier@epitech.net>
** 
** Started on  Tue Mar 14 10:52:30 2017 Maxence Fourrier
** Last update Mon Apr  3 10:38:21 2017 fourrier maxence
*/

#include "my.h"

int	my_list_is_empty(t_list *liste)
{
  if (liste == NULL)
    return (1);
  else
    return (0);
}
