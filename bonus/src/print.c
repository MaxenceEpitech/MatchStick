/*
** print.c for print in /home/Max/Documents/delivery/CPE_2016_matchstick/src
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Mon Jul  3 09:54:38 2017 fourrier maxence
** Last update Sun Jul 16 12:43:43 2017 fourrier maxence
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
