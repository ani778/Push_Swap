/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:37:54 by anhovhan          #+#    #+#             */
/*   Updated: 2021/06/18 16:37:58 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_stack(t_stack *stack)
{
  t_stack *tmp;

  tmp = stack;
  while (tmp->next)
  {
    printf("%d\n", tmp->val);
    tmp = tmp->next;
  }
}
void creat_stack(int *tab)
{
  t_stack *a;
  t_stack *first;
  int size = tmpSize(tab);

  a = (t_stack *)malloc(sizeof(t_stack));
  if (!a)
    exit(1);
  first = a;
  int i = 0;

  while (i < size)
  {
    first->val = tab[i];
    first->next = (t_stack *)malloc(sizeof(t_stack));
    first = first->next;
    i++;
  }
  first->next = NULL;

  print_stack(a);
  // ra(a);
}
