#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

// #include "Libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_stack
{
  int val;
  int chunk;
  struct s_stack *next;
} t_stack;

void print_stack(t_stack *a);
t_stack *new_node(int data);
void push(t_stack **lst, int data);
void pop(t_stack **lst);
int list_length(t_stack *lst);
char *ft_strjoin(char const *s1, char const *s2);
int ft_strcmp(const char *s1, const char *s2);
void str_check(char *argv);
void range_check(char *argv);
int error_check(int argc, char **argv);
int ft_isdigit(int c);
void error_exit(int code);
int only_num(char *str);
int ft_strlen(const char *str);
t_stack *ft_lstlast(t_stack *lst);
t_stack **new_stack(t_stack **ptr, int *arr, int size);
int count_spaces(char *str);
int *get_ints(char *argv, int size);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_atoi(const char *str);
int not_unique(int *arr, int size);
int *data_to_array(t_stack *a);
// int chunks_length(t_stack *a);
#endif