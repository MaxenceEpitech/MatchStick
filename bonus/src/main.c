/*
** main.c for main in /home/Max/Documents
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Tue Apr 25 13:13:22 2017 fourrier maxence
** Last update Sat Jul 15 16:20:51 2017 fourrier maxence
*/

#include <time.h>

#include "my.h"

int	main(int ac, char **av)
{
  int	ret;

  ret = 0;
  srand(time(NULL));
  if (ac > 1 && my_strcmp("-h", av[1]))
    {
      usage();
      return (EXIT_SUCCESS);
    }
  if (ac != 3)
    {
      bad_usage();
      return (EXIT_USAGE);
    }
  if (check_arg(av[1]) == -1
      || check_arg(av[2]) == -1
      || (ret = matchstick(my_str_to_int(av[1]),
			   my_str_to_int(av[2]))) == -1)
    return (84);
  return (ret);
}
