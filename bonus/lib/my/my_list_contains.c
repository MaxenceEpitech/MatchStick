/*
** my_list_contains.c for my_list_contains in /home/Max/Documents/lib/my
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Mon Apr  3 10:45:25 2017 fourrier maxence
** Last update Mon Apr  3 12:15:53 2017 fourrier maxence
*/

#include "my.h"

int     my_list_contains_pos_char(t_list *list, char c)
{
  char  *a;
  int   i;

  i = 0;
  a = malloc(sizeof(char) * 2);
  a[0] = c;
  a[1] = '\0';
  if (list == NULL)
    return (-1);
  while (list != NULL)
    {
      if (list->data[0] == c && list->data[1] == '\0')
        return (i);
      list = list->next;
      i++;
    }
  return (-1);
}
