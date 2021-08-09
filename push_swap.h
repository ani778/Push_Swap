#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
	int val;
	int chunk;
	struct s_stack *next;
} t_stack;

void pab(t_stack **from, t_stack **to, char ch);
void sab(t_stack **ptr, char ch);
void ss(t_stack **a, t_stack **b);
void rab(t_stack **head, char n);
void rr(t_stack **a, t_stack **b);
void rrab(t_stack **head, char n);
void rrr(t_stack **a, t_stack **b);
t_stack **new_stack(t_stack **ptr, int *arr, int size);
t_stack *new_node(int val);
t_stack *ft_lstlast(t_stack *lst);
void push(t_stack **lst, int val);
void pop(t_stack **lst);
int list_length(t_stack *lst);
int ft_strlen(const char *str);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_atoi(const char *str);
int count_spaces(char *str);
int *get_ints(char *argv, int size);
int not_unique(int *arr, int size);
int ft_isdigit(char c);
void error_exit(int code);
int only_num(char *str);
void insertionSort(int *arr, int n);
int midpoint(int *arr, int n);
void three_n(t_stack **lst);
int *data_to_array(t_stack *a);
t_stack *ft_lstprev(t_stack *lst);
void divide_a(t_stack **a, t_stack **b);
void print_stack(t_stack *a);
int chunk_length(t_stack *a);
void sort_a(t_stack **a, t_stack **b, int n);
int sorted(t_stack *a);
t_stack *chunk_last(t_stack *b);
int new_chunk_length(t_stack *a);
int *chunk_to_array(t_stack *b);
void three_n_dec(t_stack **lst);
void divide_b(t_stack **a, t_stack **b);
t_stack *uncomplete_chunk_last(t_stack *a);
void ascending_sort(int *arr, int n);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strjoin_f(char *s1, char *s2);
int one_count(t_stack *ptr);
void free_stack(t_stack *a);

#endif
