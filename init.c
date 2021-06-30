/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:24:27 by anhovhan          #+#    #+#             */
/*   Updated: 2021/06/28 14:24:30 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int tmpSize(int *tab)
{
  int len = 0;
  while (tab[len])
  {
    len++;
  }
  return (len - 1);
}

t_comb *init(t_comb *stacks, int *tab)
{
  int size;
  if (!(stacks = malloc(sizeof(t_comb))))
    exit(1);
  size = tmpSize(tab);
  stacks->min = tab[0];
  stacks->max = tab[size - 1];
  // printf("Max :%d\n", stacks->max);
  stacks->countA = size;
  stacks->countB = 0;
  // free(tab);
  return (stacks);
}
