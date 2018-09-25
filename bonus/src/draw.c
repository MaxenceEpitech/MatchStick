/*
** draw.c for draw in /home/Max/Documents/delivery/CPE_2016_matchstick/bonus/src
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Thu Jul 13 19:31:50 2017 fourrier maxence
** Last update Tue Jul 18 09:55:05 2017 fourrier maxence
*/

#include "my.h"

void		clear_window(t_all *all)
{
  int		x;
  int		y;

  y = 0;
  while (y < SCREEN_HEIGHT)
    {
      x = 0;
      while (x < SCREEN_WIDTH)
	{
	  my_put_pixel(all->graph->framebuffer, x, y, sfRed);
	  x++;
	}
      y++;
    }
}

void		reload(t_all *all)
{
  sfTexture_updateFromPixels(all->graph->texture,
                             all->graph->framebuffer->pixels,
                             SCREEN_WIDTH, SCREEN_HEIGHT, 0, 0);
  sfRenderWindow_drawSprite(all->graph->window, all->graph->sprite, NULL);
  sfRenderWindow_display(all->graph->window);
}

void		draw_line(t_all *all, int y, sfVector2f pos, int space)
{
  int		x;

  x = 0;
  while (all->map[y][x] != -1)
    {
      sfSprite_setPosition(all->sprite[0], pos);
      sfSprite_setPosition(all->sprite[1], pos);
      sfSprite_setPosition(all->sprite[2], pos);
      if (all->map[y][x] == 1)
	sfRenderWindow_drawSprite(all->graph->window,
				  all->sprite[0], NULL);
      if (all->map[y][x] == 2)
	sfRenderWindow_drawSprite(all->graph->window,
				  all->sprite[1], NULL);
      if (all->map[y][x] == 0)
	sfRenderWindow_drawSprite(all->graph->window,
				  all->sprite[2], NULL);
      pos.x += space;
      x++;
    }
}

void		draw_all(t_all *all, int line)
{
  int		y;
  int		c_space;
  int		l_space;
  sfVector2f	pos;

  y = 0;
  pos.y = 0;
  c_space = SCREEN_WIDTH / (2.5 * line);
  l_space = SCREEN_HEIGHT / (1.2 * line);
  sfRenderWindow_clear(all->graph->window, sfBlack);
  while (all->map[y])
    {
      pos.x = (line - y) * c_space;
      draw_line(all, y, pos, c_space);
      pos.y += l_space;
      y++;
    }
  reload(all);
}
