/*
** my_put_pixel.c for my_put_pixel in /home/Max/Documents/delivery/wireframe/lib/my
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Wed Apr 12 16:22:02 2017 fourrier maxence
** Last update Sun May 21 15:52:35 2017 fourrier maxence
*/

#include "my.h"

void	my_put_pixel(t_my_framebuffer *framebuffer,
                     int y, int x, sfColor color)
{
  if ((x >= 0 && x < framebuffer->height) && (y >= 0 &&
                                             y < framebuffer->width))
    {
      framebuffer->pixels[((framebuffer->width) * x + y) * 4] = color.r;
      framebuffer->pixels[((framebuffer->width) * x + y) * 4 + 1] = color.g;
      framebuffer->pixels[((framebuffer->width) * x + y) * 4 + 2] = color.b;
      framebuffer->pixels[((framebuffer->width) * x + y) * 4 + 3] = color.a;
    }
}
