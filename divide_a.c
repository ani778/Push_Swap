#include "push_swap.h"

void divide_a(t_stack **a, t_stack **b)
{
	int m;
	int n;
	int len;
	int check;
	int ch_l;
	int count;
	int rotate;
	int flag;

	n = 0;
	flag = 0;
	len = list_length(*b);
	if ((*a)->chunk == 2)
		return;
	check = 0;
	if (chunk_length(*a) != list_length(*a))
		check = 1;
	if (chunk_length(*a) == 3)
		flag = 1;
	while (chunk_length(*a) != 2 && chunk_length(*a) != 1)
	{
		ch_l = chunk_length(*a);
		m = midpoint(data_to_array(*a), ch_l);
		n += ch_l / 2;
		count = 0;
		rotate = 0;
		(*a)->chunk = 0;
		if (!check)
			chunk_last(*a)->chunk = 0;
		while ((*a)->val < m)
		{
			pab(a, b, 'b');
			if (count == 0 && b)
				(*b)->chunk = 1;
			count++;
		}
		while ((ft_lstlast(*a))->val < m)
		{
			rrab(a, 'a');
			pab(a, b, 'b');
			if (count == 0 && b)
				(*b)->chunk = 1;
			count++;
		}
		while (list_length(*b) != len + n)
		{
			if ((*a)->val < m)
			{
				pab(a, b, 'b');
				if (count == 0)
					(*b)->chunk = 1;
				count++;
			}
			else
			{
				rab(a, 'a');
				if (check)
					rotate++;
				ft_lstlast(*a)->chunk = 0;
			}
		}
		(*b)->chunk = 3;
		if (flag && one_count(*b) == 0 && (*b)->next && (*b)->next->chunk == 2)
			(*b)->chunk = 2;
		if (ft_lstlast(*a)->chunk != 2)
			ft_lstlast(*a)->chunk = 1;
		if (rotate && new_chunk_length(*a) != 0)
			ft_lstlast(*a)->chunk = 0;
		while (rotate > 0)
		{
			rrab(a, 'a');
			rotate--;
		}
		(*a)->chunk = 3;
	}
	if (chunk_length(*a) == 1)
	{
		if ((*a)->val > (*a)->next->val && (*a)->next)
			sab(a, 'a');
		if ((*a)->next && (*a)->next->chunk == 2 && (*a)->val > (*b)->val)
			(*a)->chunk = 2;
		else
		{
			pab(a, b, 'b');
			(*b)->chunk = 3;
			if ((*b)->next && (*b)->next->chunk == 2)
				(*b)->chunk = 2;
		}
	}
	if (chunk_length(*a) == 2)
	{
		if ((*a)->val > (*a)->next->val)
			sab(a, 'a');
		if (((*a)->next->next && (*a)->next->next->chunk == 2) || list_length(*a) == 2)
		{
			(*a)->chunk = 2;
			(*a)->next->chunk = 2;
		}
		else
		{
			pab(a, b, 'b');
			pab(a, b, 'b');
			(*b)->chunk = 3;
			(*b)->next->chunk = 1;
			if ((*b)->next->next && (*b)->next->next->chunk == 2)
			{
				(*b)->chunk = 2;
				(*b)->next->chunk = 2;
			}
		}
	}
}
