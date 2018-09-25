/*
** my_str_maj.c for my_str_maj in /home/Max/Documents/lib/my
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Thu Apr  6 19:30:19 2017 fourrier maxence
** Last update Thu Apr  6 19:33:46 2017 fourrier maxence
*/

#include "my.h"

char	*my_str_maj(char *str)
{
  char	*new;
  int	i;

  i = 0;
  new = malloc(sizeof(char) * (my_strlen(str) + 1));
  if (new == NULL)
    return (NULL);
  while (str[i])
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	new[i] = str[i] - 32;
      else
	new[i] = str[i];
      i++;
    }
  return (new);
}
