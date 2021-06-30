#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "Libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_stack
{
  int val;
  struct s_stack *next;
} t_stack;

typedef struct s_comb
{
  int max;
  int min;
  int countA;
  int countB;
  t_stack *a;
  t_stack *b;
} t_comb;
int ft_strcmp(const char *s1, const char *s2);
void error_message();
void str_check(char *argv);
void range_check(char *argv);
int *check_duplicate(char **argv, int *tab);
int *error_check(int argc, char **argv);
void print_stack(t_stack *stack);
void creat_stack(int *tab);
int tmpSize(int *tab);
t_comb *init(t_comb *stacks, int *tab);
void ft_swap(int *a, int *b);
int sab(t_stack **head);
int rab(t_stack **head);
int rrab(t_stack **head);
int pab(t_stack **head_to, t_stack **head_from);
int ss(t_stack **stack1, t_stack **stack2);
int rr(t_stack **stack1, t_stack **stack2);
int rrr(t_stack **stack1, t_stack **stack2);
int main(int argc, char **argv);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void printArray(int arr[]);
#endif
