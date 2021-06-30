/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:37:21 by anhovhan          #+#    #+#             */
/*   Updated: 2021/06/18 16:37:24 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_strcmp(const char *s1, const char *s2)
{
  while (*s1 != '\0' && *s2 != '\0')
  {
    if (*s1 != *s2)
      break;
    s1++;
    s2++;
  }
  return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void error_message()
{
  write(1, "Error\n", 6);
  exit(1);
}

void str_check(char *argv)
{
  int i;

  i = 0;
  if (argv[0] == '-')
    i++;
  while (argv[i])
  {
    if (!ft_isdigit(argv[i]))
      error_message();
    i++;
  }
}

void range_check(char *argv)
{
  int i;

  i = ft_atoi(argv);
  if (ft_strcmp(argv, ft_itoa(i)) != 0)
    error_message();
}

int *check_duplicate(char **argv, int *tab)
{
  int i;
  int j;
  int tmp;

  i = 0;
  while (argv[i])
  {
    tab[i] = ft_atoi(argv[i]);
    i++;
  }
  tmp = i;
  i = 0;
  while (i <= tmp)
  {
    j = i + 1;
    while (j <= tmp)
    {
      if (tab[i] == tab[j])
        error_message();
      j++;
    }
    i++;
  }
  return (tab);
  // s
}

int *error_check(int argc, char **argv)
{
  int tab[1000];
  int i;

  i = 0;
  while (i < argc - 1)
  {
    str_check(argv[i]);
    range_check(argv[i]);
    i++;
  }
  return (check_duplicate(argv, tab));
}