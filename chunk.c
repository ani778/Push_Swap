/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 18:39:13 by anhovhan          #+#    #+#             */
/*   Updated: 2021/07/17 18:39:17 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int chunk_length(t_stack *ptr)
{
  int count;

  count = 0;
  if (!ptr)
    return (0);
  if (ptr->next && ptr->next->chunk == 3 && ptr->chunk == 3)
    return (1);
  if (ptr->chunk == 3)
  {
    while (ptr)
    {
      ptr = ptr->next;
      while (ptr && ptr->chunk == 0)
      {
        ptr = ptr->next;
        count++;
      }
      if (ptr)
        count += 2;
      else
        count += 1;
      return (count);
    }
  }
  return (count);
}
int *chunk_to_array(t_stack *b)
{
  int *arr;
  int i;
  int n;

  n = chunk_length(b);
  if (!(arr = malloc(n * sizeof(int))))
    return (NULL);
  i = 0;
  while (b && i < n)
  {
    arr[i] = b->val;
    b = b->next;
    i++;
  }
  return (arr);
}
int one_count(t_stack *ptr)
{
  int i;

  i = 0;
  while (ptr && ptr->chunk == 1)
  {
    i++;
    ptr = ptr->next;
  }
  if (ptr->chunk == 2)
    i--;
  return (i);
}

t_stack *chunk_last(t_stack *b)
{
  b = b->next;
  while (b && b->next && b->chunk != 1)
  {
    b = b->next;
  }
  return (b);
}

int new_chunk_length(t_stack *a)
{
  int n;

  n = 0;
  while (a && a->chunk != 2)
  {
    n++;
    a = a->next;
  }
  return (n);
}
