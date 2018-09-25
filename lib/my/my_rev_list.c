/*
** my_rev_list.c for my_rev_list in /home/Max/Documents/bistroV2/lib/my
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Tue Mar 28 22:41:33 2017 fourrier maxence
** Last update Sat May 13 10:03:33 2017 fourrier maxence
*/

#include "my.h"

t_list		*my_rev_list(t_list *list)
{
  t_list	*copy;
  t_list	*my_pos;
  t_list	*pos_next;

  copy = malloc(sizeof(t_list));
  my_pos = malloc(sizeof(t_list));
  pos_next = malloc(sizeof(t_list));
  if (copy == NULL || my_pos == NULL || pos_next == NULL)
    return (NULL);
  copy = list;
  my_pos = NULL;
  while (copy->next != NULL)
    {
      pos_next = copy->next;
      copy->next = my_pos;
      my_pos = copy;
      copy = pos_next;
    }
  copy->next = my_pos;
  return (copy);
}
