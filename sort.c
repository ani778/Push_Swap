#include "push_swap.h"

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
  }
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

void sort_a(t_stack **a, t_stack **b, int n)
{
  while (!(sorted(*a) && list_length(*a) == n))
  {
    divide_a(a, b);
    divide_b(a, b);
  }
}
