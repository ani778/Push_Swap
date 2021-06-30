/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quic_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 15:11:54 by anhovhan          #+#    #+#             */
/*   Updated: 2021/06/18 15:11:56 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int partition(int arr[], int low, int high)
{
  int pivot = arr[high];
  int i = (low - 1);
  for (int j = low; j <= high - 1; j++)
  {
    if (arr[j] <= pivot)
    {
      i++;
      ft_swap(&arr[i], &arr[j]);
    }
  }
  ft_swap(&arr[i + 1], &arr[high]);
  return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
  if (low < high)
  {
    int pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

void printArray(int arr[])
{
  int i;
  for (i = 0; i < tmpSize(arr); i++)
    printf("%d ", arr[i]);
  printf(" \n");
}

// int main()
// {
//   int arr[] = {2, 7, 8, 9, 4, 6, 5};
//   int n = sizeof(arr) / sizeof(arr[0]);
//   quickSort(arr, 0, n - 1);
//   printf("The sorted array is : ");
//   printArray(arr, n);
//   return 0;
// }