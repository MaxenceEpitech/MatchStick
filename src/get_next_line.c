/*# define MEM_SIZE 4096
** test.c for test in /home/Max/Documents/delivery/CPE_2016_getnextline
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Fri Jun  9 21:07:02 2017 fourrier maxence
** Last update Sun Jul 16 02:03:38 2017 fourrier maxence
*/

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define MEM_SIZE 4096
#include "my.h"

char            *get_next_line(const int fd)
{
  char          buff[MEM_SIZE];
  char          *ret;
  int           size;
  int           total;

  if ((ret = malloc(sizeof(char) * MEM_SIZE)) == NULL)
    return (NULL);
  size = 1;
  total = 0;
  buff[0] = 0;
  while (size > 0 && buff[0] != '\n')
    {
      size = read(fd, buff, 1);
      total += size;
      if (size > 0 && buff[0] != '\n')
        ret[total - 1] = buff[0];
    }
  if (total == 0)
    return (NULL);
  ret[total] = '\0';
  return (ret);
}
