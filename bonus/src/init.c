/*
** init.c for init in /home/Max/Documents/delivery/CPE_2016_matchstick/bonus/src
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Thu Jul 13 16:54:03 2017 fourrier maxence
** Last update Sun Jul 16 23:08:42 2017 fourrier maxence
*/

#include "my.h"

sfSprite        *load_picture(char *str)
{
  sfSprite      *sprite;
  sfTexture     *texture;

  if ((texture = sfTexture_createFromFile(str, NULL)) == NULL
      || (sprite = sfSprite_create()) == NULL)
    return (NULL);
  sfSprite_setTexture(sprite, texture, sfTrue);
  return (sprite);
}

sfSprite	**init_sprite()
{
  sfSprite	**sprite;

  if ((sprite = malloc(sizeof(sfSprite*) * (NB_SPRITE + 1))) == NULL
      || (sprite[0] = load_picture("pic/allumette.png")) == NULL
      || (sprite[1] = load_picture("pic/allumette_flame.png")) == NULL
      || (sprite[2] = load_picture("pic/allumette_done.png")) == NULL)
    return (NULL);
  sprite[NB_SPRITE] = NULL;
  return (sprite);
}

t_graph		*init_graph()
{
  t_graph	*graph;

  if ((graph = malloc(sizeof(t_graph))) == NULL
      || (graph->window =
          create_window(SCREEN_NAME, SCREEN_WIDTH, SCREEN_HEIGHT)) == NULL
      || (graph->sprite =
          sfSprite_create()) == NULL
      || (!graph->window)
      || (graph->texture =
          sfTexture_create(SCREEN_WIDTH, SCREEN_HEIGHT)) == NULL)
    return (NULL);
  if ((graph->framebuffer =
       my_framebuffer_create(SCREEN_WIDTH, SCREEN_HEIGHT)) == NULL)
    return (NULL);
  return (graph);
}

t_all		*init_all(int line, int size)
{
  t_all		*all;

  if ((all = malloc(sizeof(t_all))) == NULL
      || (all->map = create_map(line)) == NULL
      || (all->graph = init_graph()) == NULL
      || (all->sprite = init_sprite()) == NULL)
    return (NULL);
  all->space.x = SCREEN_WIDTH / (2.5 * line);
  all->space.y = SCREEN_HEIGHT / (1.2 * line);
  return (all);
}
