#include "push_swap.h"

t_stack *new_node(int data)
{
	t_stack *new;

	if (!(new = malloc(sizeof(t_stack))))
		error_exit(-1);
	new->val = data;
	new->chunk = 0;
	new->next = NULL;
	return (new);
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
	return (size);
}
void print_stack(t_stack *a)
{
	int size;

	size = list_length(a);
	printf("\n\n");
	while (size > 0)
	{
		printf("d %5d c %5d\n", a->val, a->chunk);
		a = a->next;
		size--;
	}
	printf("\n\n");
}

t_stack *ft_lstprev(t_stack *lst)
{
	while (lst && lst->next && lst->next->next)
		lst = lst->next;
	return (lst);
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

int midpoint(int *arr, int n)
{
	insertionSort(arr, n);
	return (arr[n / 2]);
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

t_stack **new_stack(t_stack **ptr, int *arr, int size)
{
	while (size > 0)
	{
		push(ptr, arr[size - 1]);
		size--;
	}
	(*ptr)->chunk = 3;
	ft_lstlast(*ptr)->chunk = 1;
	return (ptr);
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
