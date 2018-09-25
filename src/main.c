/*
** main.c for main in /home/Max/Documents
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Tue Apr 25 13:13:22 2017 fourrier maxence
** Last update Thu Jul 13 16:48:29 2017 fourrier maxence
*/

#include "my.h"

int	main(int ac, char **av)
{
  int	ret;

  ret = 0;
  if (ac != 3)
    {
      return (EXIT_USAGE);
    }
  if (check_arg(av[1]) == -1
      || check_arg(av[2]) == -1
      || (ret = matchstick(my_str_to_int(av[1]),
			   my_str_to_int(av[2]))) == -1)
    return (84);
  return (ret);
}
