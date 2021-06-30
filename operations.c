/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 16:49:49 by anhovhan          #+#    #+#             */
/*   Updated: 2021/06/19 16:49:52 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// void ft_swap(int *a, int *b)
// {
//   int temp;

//   temp = *a;
//   *a = *b;
//   *b = temp;
// }
int sab(t_stack **head)
{
  t_stack *stack;

  stack = *head;
  if (stack && stack->next)
    ft_swap(&stack->val, &stack->next->val);
  return (0);
}
int rab(t_stack **head)
{
  t_stack *first;
  t_stack *last;
  t_stack *stack;

  stack = *head;
  if (!(stack && stack->next))
    return (0);
  first = stack;
  stack = stack->next;
  last = stack;
  while (last->next)
    last = last->next;
  last->next = first;
  first->next = NULL;
  *head = stack;
  return (0);
}
int rrab(t_stack **head)
{
  t_stack *last;
  t_stack *previous;
  t_stack *stack;

  stack = *head;
  if (!(stack && stack->next))
    return (0);
  last = stack;
  while (last->next)
  {
    previous = last;
    last = last->next;
  }
  last->next = stack;
  previous->next = NULL;
  *head = last;
  return (0);
}

int pab(t_stack **head_to, t_stack **head_from)
{
  t_stack *t;
  t_stack *tmp;

  tmp = *head_from;
  t = (*head_to)->next;
  *head_from = *head_to;
  (*head_from)->next = tmp;
  *head_to = t;

  return (0);
}
int ss(t_stack **stack1, t_stack **stack2)
{
  sab(stack1);
  sab(stack2);
  return (0);
}
int rr(t_stack **stack1, t_stack **stack2)
{
  rab(stack1);
  rab(stack2);
  return (0);
}
int rrr(t_stack **stack1, t_stack **stack2)
{
  rrab(stack1);
  rrab(stack2);
  return (0);
}