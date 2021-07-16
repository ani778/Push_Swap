/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 11:37:10 by anhovhan          #+#    #+#             */
/*   Updated: 2021/07/15 11:37:13 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_isdigit(int c)
{
  if (c >= 48 && c <= 57)
    return (1);
  else
    return (0);
}

void error_exit(int code)
{
  if (code == 1)
    write(2, "Error\n", 7);
  else if (code == -1)
    write(2, "No memory left\n", 16);
  else if (code == 0)
    write(2, "NULL value\n", 12);
  exit(code);
}
int only_num(char *str)
{
  while (*str)
  {
    if (!(ft_isdigit(*str) || *str == ' ' || (*str == '-' && ft_isdigit(*(str + 1)))))
      return (0);
    str++;
  }
  return (1);
}
