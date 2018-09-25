/*
** create_windows.c for create_window in /home/Max/Documents/delivery/wireframe/lib/my
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Tue Apr 11 11:42:20 2017 fourrier maxence
** Last update Fri Apr 14 21:04:59 2017 fourrier maxence
*/

#include "my.h"

sfRenderWindow		*create_window(char *name, int width, int height)
{
  sfVideoMode		mode;
  sfRenderWindow	*window;

  mode.width = width;
  mode.height = height;
  mode.bitsPerPixel = 32;
  window = sfRenderWindow_create(mode, name, sfResize | sfClose, NULL);
  if (window == NULL)
    return (NULL);
  return (window);
}
