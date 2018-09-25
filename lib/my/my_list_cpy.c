/*
** my_list_cpy.c for my_list_cpy in /home/Max/Documents/delivery/CPE_year_Pushswap/lib/my
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Mon Apr  3 23:29:32 2017 fourrier maxence
** Last update Wed Apr  5 18:55:42 2017 fourrier maxence
*/

#include "my.h"

t_list		*my_list_cpy(t_list *list)
{
  t_list	*new;

  new = malloc(sizeof(t_list));
  if (new == NULL)
    return (NULL);
  new = NULL;
  while (list != NULL)
    {
      new = my_link_list(new, list->data);
      list = list->next;
    }
  new = my_rev_list(new);
  return (new);
}
