/*
** my_putstr_error.c for my_putstr_error in /home/Max/Documents/bistroV2/lib/my
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Sun Apr  2 11:38:50 2017 fourrier maxence
** Last update Mon Apr  3 10:39:31 2017 fourrier maxence
*/

#include "my.h"

void	my_putstr_error(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      write(2, &str[i], 1);
      i = i + 1;
    }
}
