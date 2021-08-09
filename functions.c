#include "push_swap.h"

void pab(t_stack **from, t_stack **to, char ch)
{
	//if-ery
	push(to, (*from)->val);
	pop(from);
	if (ch == 'a')
		write(1, "pa\n", 3);
	else if (ch == 'b')
		write(1, "pb\n", 3);
}

void sab(t_stack **ptr, char ch)
{
	int tmp;

	tmp = (*ptr)->val;
	(*ptr)->val = (*ptr)->next->val;
	(*ptr)->next->val = tmp;
	if (ch == 'a')
		write(1, "sa\n", 3);
	else if (ch == 'b')
		write(1, "sb\n", 3);
}

void ss(t_stack **a, t_stack **b)
{
	sab(a, '0');
	sab(b, '0');
	write(1, "ss\n", 3);
}

void rab(t_stack **head, char n)
{
	t_stack *first;
	t_stack *last;
	t_stack *stack;

	stack = *head;
	first = stack;
	stack = stack->next;
	last = stack;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
	*head = stack;
	if (n == 'a')
		write(1, "ra\n", 3);
	else if (n == 'b')
		write(1, "rb\n", 3);
}
void rr(t_stack **a, t_stack **b)
{
	rab(a, '0');
	rab(b, '0');
	write(1, "rr\n", 3);
}

void rrab(t_stack **head, char n)
{
	t_stack *last;
	t_stack *previous;
	t_stack *stack;

	stack = *head;
	last = stack;
	while (last->next)
	{
		previous = last;
		last = last->next;
	}
	last->next = stack;
	previous->next = NULL;
	*head = last;
	if (n == 'a')
		write(1, "rra\n", 4);
	else if (n == 'b')
		write(1, "rrb\n", 4);
}

void rrr(t_stack **a, t_stack **b)
{
	rrab(a, '0');
	rrab(b, '0');
	write(1, "rrr\n", 4);
}
