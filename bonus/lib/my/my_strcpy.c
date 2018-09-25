/*
** my_strcpy.c for my_strcpy in /home/maxence.fourrier/CPool_Day06
** 
** Made by Maxence Fourrier
** Login   <maxence.fourrier@epitech.net>
** 
** Started on  Mon Mar  6 09:36:12 2017 Maxence Fourrier
** Last update Fri Mar 17 20:33:10 2017 maxence fourrier
*/

#include "my.h"

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (dest[i] != '\0')
    {
      dest[i] = '\0';
      i++;
    }
  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
