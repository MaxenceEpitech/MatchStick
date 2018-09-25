/*
** turn.c for turn in /home/Max/Documents/delivery/CPE_2016_matchstick/src
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Mon Jul  3 15:18:48 2017 fourrier maxence
** Last update Tue Jul 18 09:56:33 2017 fourrier maxence
*/

#include "my.h"

void		undo(t_all *all, int line)
{
  int		y;
  int		x;
  int		changed;

  y = 0;
  changed = 0;
  all->line = -1;
  while (all->map[y])
    {
      x = 0;
      while (all->map[y][x] != -1)
	{
	  if (all->map[y][x] == 2)
	    {
	      all->map[y][x] = 1;
	      changed = 1;
	    }
	  x++;
	}
      y++;
    }
  if (changed == 1)
    draw_all(all, line);
}

int		change_matchestick(t_all *all, sfVector2i cpt)
{
  if (all->map[cpt.y][cpt.x] == 1
      && (all->line == -1 || all->line == cpt.y))
    {
      all->map[cpt.y][cpt.x] = 2;
      all->line = cpt.y;
    }
  return (1);
}

int		check_pos(t_all *all, int line, sfVector2i mouse)
{
  sfVector2i	cpt;
  sfVector2i	pos;

  cpt.y = 0;
  pos.y = 0;
  while (all->map[cpt.y])
    {
      pos.x = (line - cpt.y) * all->space.x;
      cpt.x = 0;
      while (all->map[cpt.y][cpt.x] != -1)
	{
	  if (mouse.x >= pos.x - 8 + 75 && mouse.x <= pos.x + 8 + 75
	      && mouse.y >= pos.y - 14 + 43 && mouse.y <= pos.y + 14 + 43)
	    return (change_matchestick(all, cpt));
	  cpt.x++;
	  pos.x += all->space.x;
	}
      pos.y += all->space.y;
      cpt.y++;
    }
  return (0);
}

int             wait_key(sfRenderWindow *window, sfKeyCode key)
{
  sfEvent       event;

  sfRenderWindow_waitEvent(window, &event);
  while (event.type != sfEvtKeyReleased
         || event.key.code != key)
    sfRenderWindow_waitEvent(window, &event);
  return (0);
}

int		player_turn(t_all *all, int line, int size)
{
  sfVector2i	pos;

  draw_all(all, line);
  draw_all(all, line);
  all->line = -1;
  while (!sfKeyboard_isKeyPressed(sfKeySpace))
    {
      if (sfKeyboard_isKeyPressed(sfKeyEscape))
	return (1);
      if (sfMouse_isButtonPressed(sfMouseLeft))
	{
	  pos = sfMouse_getPositionRenderWindow(all->graph->window);
	  if (check_pos(all, line, pos) == 1)
	    draw_all(all, line);
	}
      if (sfKeyboard_isKeyPressed(sfKeyU))
	undo(all, line);
    }
  wait_key(all->graph->window, sfKeySpace);
  return (0);
}
