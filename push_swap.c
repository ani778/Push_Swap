/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 11:38:50 by anhovhan          #+#    #+#             */
/*   Updated: 2021/07/15 11:38:51 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
  // // t_stack **a;
  // // t_stack **b;
  // t_stack *ptr1;
  // // t_stack *ptr2;
  // int *arr;
  // // int size;
  // // int i;
  // // char *result;
  // creat_stack(arr);
  // print_stack(ptr1);
  t_stack **a;
  int *arr = NULL;
  t_stack *ptr1;
  t_stack *ptr2;
  t_stack **b;
  int size = 0;
  int i;
  char *result;

  ptr1 = NULL;
  ptr2 = NULL;
  a = &ptr1;
  b = &ptr2;
  if (argc == 1)
    return (0);
  i = 1;
  result = argv[i];
  i++;
  while (i < argc)
  {
    result = ft_strjoin(result, argv[i]);
    i++;
  }
  print_stack(*a);
  // pop(*a);
  size = count_spaces(result) + 1;
  arr = get_ints(result, size);
  a = new_stack(a, arr, size);
  // three_n(a);
  // sort_a(a, b, list_length(*a));
  // free(arr);
  // free_stack(*a);
  // free_stack(*b);
}
