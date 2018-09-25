/*
** my_strcmp.c for my_strcmp in /home/Max/Documents/delivery/PSU_2016_my_ls/lib/my
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Tue Apr 18 15:57:07 2017 fourrier maxence
** Last update Tue Apr 18 16:03:06 2017 fourrier maxence
*/

#include "my.h"

int	my_strcmp(char *a, char *b)
{
  int	i;

  i = 0;
  while (a[i] != '\0' || b[i] != '\0')
    {
      if (a[i] != b[i])
	return (0);
      i++;
    }
  if (a[i] != '\0' || b[i] != '\0')
    return (0);
  return (1);
}
