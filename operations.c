/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 11:38:31 by anhovhan          #+#    #+#             */
/*   Updated: 2021/07/15 11:38:35 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int sab(t_stack **head, char n)
{
  t_stack *stack;

  stack = *head;
  if (stack && stack->next)
    ft_swap(&stack->val, &stack->next->val);
  if (n == 'a')
    write(1, "pa\n", 3);
  else if (n == 'b')
    write(1, "pb\b", 3);
  // printf("First value: %d\n", stack->val);
  // printf("Second value: %d\n", stack->next->val);
  return (0);
}
int rab(t_stack **head, char n)
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
  if (n == 'a')
    write(1, "ra\n", 3);
  else if (n == 'b')
    write(1, "rb\n", 3);
  return (0);
}
int rrab(t_stack **head, char n)
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
  if (n == 'a')
    write(1, "rra\n", 4);
  else if (n == 'b')
    write(1, "rrb\n", 4);
  // printf("Head value is : %d\n", (*head)->val);
  return (0);
}

int pab(t_stack **a, t_stack **b, char n)
{
  push(b, (*a)->val);
  pop(a);
  if (n == 'a')
    write(1, "pa\n", 3);
  else if (n == 'b')
    write(1, "pb\b", 3);
  return (0);
}
int ss(t_stack **a, t_stack **b)
{
  sab(a, '0');
  sab(b, '0');
  write(1, "ss\n", 3);
  return (0);
}
int rr(t_stack **a, t_stack **b)
{
  rab(a, '0');
  rab(b, '0');
  write(1, "rr\n", 3);
  return (0);
}
int rrr(t_stack **a, t_stack **b)
{
  rrab(a, '0');
  rrab(b, '0');
  write(1, "rrr\n", 4);
  return (0);
}
