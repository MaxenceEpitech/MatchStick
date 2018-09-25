/*
** my_putchar.c for my_putchar in /home/maxence.fourrier/CPool_Day04
** 
** Made by Maxence Fourrier
** Login   <maxence.fourrier@epitech.net>
** 
** Started on  Thu Mar  2 11:58:19 2017 Maxence Fourrier
** Last update Mon Apr 24 14:29:05 2017 fourrier maxence
*/

#include <unistd.h>

void	my_putchar(char a)
{
  write(1, &a, 1);
}
