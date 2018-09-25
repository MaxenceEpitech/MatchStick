/*
** my_framebuffer_create.c for my_framebuffer_create in /home/Max/Documents/delivery/wireframe/lib/my
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Wed Apr 12 13:00:30 2017 fourrier maxence
** Last update Sat May 13 11:09:20 2017 fourrier maxence
*/

#include "my.h"

t_my_framebuffer	*my_framebuffer_create(int width, int height)
{
  t_my_framebuffer	*framebuffer;
  int			i;

  i = 0;
  framebuffer = malloc(sizeof(t_my_framebuffer));
  if (framebuffer == NULL)
    return (NULL);
  framebuffer->pixels = malloc(width * height
			       * 4 * sizeof(*framebuffer->pixels));
  if (framebuffer->pixels == NULL)
    return (NULL);
  while (i < width * height * 4)
    {
      framebuffer->pixels[i] = 0;
      i++;
    }
  framebuffer->width = width;
  framebuffer->height = height;
  return (framebuffer);
}
