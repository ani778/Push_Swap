/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 14:13:40 by anhovhan          #+#    #+#             */
/*   Updated: 2021/07/17 14:13:45 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *data_to_array(t_stack *a)
{
  int *arr;
  int i;
  int n;

  n = list_length(a);
  if (!(arr = malloc(n * sizeof(int))))
    return (NULL);
  i = 0;
  while (a)
  {
    arr[i] = a->val;
    a = a->next;
    i++;
  }

  return (arr);
}

int sorted(t_stack *a)
{
  int *arr;
  int *arr1;
  int n;

  arr = data_to_array(a);
  arr1 = data_to_array(a);
  n = list_length(a);
  ascending_sort(arr1, n);
  while (n > 0 && *arr == *arr1)
  {
    n--;
    arr++;
    arr1++;
  }
  if (n == 0)
    return (1);
  return (0);
}

void ascending_sort(int *arr, int n)
{
  int a;
  int i;
  int j;

  for (i = 0; i < n; ++i)
  {
    for (j = i + 1; j < n; ++j)
    {
      if (arr[i] > arr[j])
      {
        a = arr[i];
        arr[i] = arr[j];
        arr[j] = a;
      }
    }
    printf("Sorted Array %d\n", arr[i]);
  }
}
void insertionSort(int *arr, int n)
{
  int i;
  int key;
  int j;
  for (i = 1; i < n; i++)
  {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}
int midpoint(int *arr, int n)
{
  insertionSort(arr, n);
  return (arr[n / 2]);
}