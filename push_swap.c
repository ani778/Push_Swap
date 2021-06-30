/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 17:23:20 by anhovhan          #+#    #+#             */
/*   Updated: 2021/06/18 17:23:22 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
  t_comb *stacks;
  t_stack *a;
  t_stack *b;
  int *tab;

  if (argc < 2)
    exit(1);

  tab = error_check(argc, argv + 1);
  creat_stack(tab);
  quickSort(tab, 0, tmpSize(tab) - 1);
  printArray(tab);
  stacks = init(stacks, tab);
  printf("Max :%d\n", stacks->max);
}
