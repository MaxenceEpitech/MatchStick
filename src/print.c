/*
** print.c for print in /home/Max/Documents/delivery/CPE_2016_matchstick/src
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Mon Jul  3 09:54:38 2017 fourrier maxence
** Last update Tue Jul  4 09:34:19 2017 fourrier maxence
*/

#include "my.h"

void	bad_usage()
{
  my_putstr_error("Wrong use of MatchStick.\n");
  my_putstr_error("Example : /matchstick <1> <2>\n");
  my_putstr_error("<1> = Number of lines.\n");
  my_putstr_error("<2> = Number of stick(s) that ");
  my_putstr_error("can be removed each turn.\n");
}

void	usage()
{
  my_putstr_error("Example : /matchstick <1> <2>\n");
  my_putstr_error("<1> = Number of lines.\n");
  my_putstr_error("<2> = Number of stick(s) that ");
  my_putstr_error("can be removed each turn.\n");
}

void	print_line(int size)
{
  int	i;

  i = 0;
  while (i < (2 * size) + 1)
    {
      my_putchar('*');
      i++;
    }
  my_putchar('\n');
}

void	print_space(int nb)
{
  while (nb > 0)
    {
      my_putchar(' ');
      nb--;
    }
}

void	print_map(int **map, int line)
{
  int	y;

  y = 0;
  print_line(line);
  while (map[y])
    {
      my_putchar('*');
      print_center_map(map, line, y);
      my_putstr("*\n");
      y++;
    }
  print_line(line);
  my_putchar('\n');
}
