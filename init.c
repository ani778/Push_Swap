/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 11:37:55 by anhovhan          #+#    #+#             */
/*   Updated: 2021/07/15 11:37:59 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int count_spaces(char *str)
{
  int count;

  count = 0;
  while (*str)
  {
    if (*str == ' ')
      count++;
    str++;
  }
  return (count);
}

int *get_ints(char *argv, int size)
{
  int len;
  int start;
  char *str;
  int *ret;
  int *ret1;
  int size1;
  char *join;

  size1 = size;
  if (!only_num(argv))
    error_exit(1);
  if (!(ret = (int *)malloc(size)))
    error_exit(-1);
  ret1 = ret;
  str = argv;
  start = 0;
  while (*str && size > 0)
  {
    len = 0;
    while (*str != ' ' && *str)
    {
      len++;
      str++;
    }
    join = ft_substr((char const *)argv, (unsigned int)start, len);
    *ret1 = ft_atoi(join);
    //free(join);
    ret1++;
    size--;
    start += len + 1;
    str++;
  }
  if (not_unique(ret, size1))
    error_exit(1);
  return (ret);
}
