/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 11:37:37 by anhovhan          #+#    #+#             */
/*   Updated: 2021/07/15 11:37:39 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *new_node(int data)
{
  t_stack *new;

  if (!(new = malloc(sizeof(t_stack))))
    error_exit(-1);
  new->val = data;
  new->chunk = 0;
  new->next = NULL;
  // printf("Value : %d\n", new->val);
  return (new);
}

void print_stack(t_stack *a)
{
  int size;

  size = list_length(a);

  while (size > 0)
  {
    // printf("d %5d c %5d\n", a->val, a->chunk);
    // printf("Value is %5d \n", a->val);
    a = a->next;
    size--;
  }
  printf("\n\n");
}
t_stack *ft_lstlast(t_stack *lst)
{
  while (lst && lst->next)
    lst = lst->next;
  return (lst);
}

void push(t_stack **lst, int data)
{
  t_stack *new;

  new = new_node(data);
  new->next = *lst;
  *lst = new;
}

void pop(t_stack **lst)
{
  t_stack *t;

  if (!(*lst))
    error_exit(0);
  if (!(*lst)->next)
    (*lst)->next = NULL;
  t = *lst;
  *lst = (*lst)->next;
  free(t);
}
int list_length(t_stack *lst)
{
  int size;

  size = 0;
  while (lst)
  {
    lst = lst->next;
    size++;
  }
  // printf("Length :%d\n", size);
  return (size);
}
t_stack *ft_lstprev(t_stack *lst)
{
  while (lst && lst->next && lst->next->next)
    lst = lst->next;
  return (lst);
}
int not_unique(int *arr, int size)
{
  int i;
  int j;

  i = 0;
  while (i < size - 1)
  {
    j = i + 1;
    while (j < size)
    {
      if (arr[i] == arr[j])
        return (1);
      j++;
    }
    i++;
  }
  return (0);
}

void free_stack(t_stack *a)
{
  t_stack *tmp;

  while (a)
  {
    tmp = a->next;
    a = tmp;
    free(tmp);
  }
}
t_stack **new_stack(t_stack **ptr, int *arr, int size)
{
  while (size > 0)
  {
    push(ptr, arr[size - 1]);
    size--;
  }
  (*ptr)->chunk = 3;
  ft_lstlast(*ptr)->chunk = 1;
  // printf("ptr chunk is : %d\n", ft_lstlast(*ptr)->chunk);
  return (ptr);
}
