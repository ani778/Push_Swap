#include "push_swap.h"

void divide_b(t_stack **a, t_stack **b)
{
	int m;
	int n;
	int check;
	int ch_l;
	int count;
	int rotate;

	n = 0;
	if (*b == NULL)
		return;
	check = 0;
	if (chunk_length(*b) != list_length(*b))
		check = 1;
	while (chunk_length(*b) != 2 && chunk_length(*b) != 1 && (*b)->chunk != 2 && chunk_length(*b) != 0)
	{
		ch_l = chunk_length(*b);
		m = midpoint(chunk_to_array(*b), ch_l);
		if (ch_l % 2 == 0)
			ch_l--;
		n += ch_l / 2;
		count = 0;
		rotate = 0;
		(*b)->chunk = 0;
		if (!check)
			chunk_last(*b)->chunk = 0;
		while ((*b)->val > m)
		{
			pab(b, a, 'a');
			if (count == 0)
				(*a)->chunk = 1;
			count++;
		}
		while (new_chunk_length(*a) != n)
		{
			if ((*b)->val > m)
			{
				pab(b, a, 'a');
				if (count == 0)
					(*a)->chunk = 1;
				count++;
			}
			else
			{
				rab(b, 'b');
				if (check)
					rotate++;
				ft_lstlast(*b)->chunk = 0;
			}
		}
		(*a)->chunk = 3;
		if (ft_lstlast(*b)->chunk != 2)
			ft_lstlast(*b)->chunk = 1;
		if (rotate && new_chunk_length(*b) != 0)
			ft_lstlast(*b)->chunk = 0;
		while (rotate > 0)
		{
			rrab(b, 'b');
			rotate--;
		}
		(*b)->chunk = 3;
	}
	if ((*b)->chunk == 2)
	{
		if ((*a)->chunk == 2)
		{
			pab(b, a, 'a');
			(*a)->chunk = 3;
			if (sorted(*a))
				(*a)->chunk = 2;
			if (*b && (*b)->chunk == 2)
			{
				if (!(*b)->next)
				{
					pab(b, a, 'a');
					(*a)->chunk = 2;
					return;
				}
				pab(b, a, 'a');
				(*a)->chunk = 2;
			}
		}
	}
	if (chunk_length(*b) == 1)
	{
		if ((*a)->chunk == 2)
		{
			if (!(*b)->next)
			{
				pab(b, a, 'a');
				*b = NULL;
				b = NULL;
				return;
			}
			pab(b, a, 'a');
			(*a)->chunk = 2;
		}
		else
		{
			(*b)->chunk = 3;
			if (!((*b)->next))
				(*b)->chunk = 2;
		}
	}
	if (chunk_length(*b) == 2)
	{
		if ((*b)->val < (*b)->next->val)
			sab(b, 'b');
		if ((*a)->chunk == 2)
		{
			if (list_length(*b) == 2)
			{
				pab(b, a, 'a');
				pab(b, a, 'a');
				*b = NULL;
				b = NULL;
				(*a)->chunk = 2;
				(*a)->next->chunk = 2;
				return;
			}
			pab(b, a, 'a');
			pab(b, a, 'a');
			(*a)->chunk = 2;
			(*a)->next->chunk = 2;
		}
		else
		{
			(*b)->chunk = 2;
			(*b)->next->chunk = 2;
		}
	}
	if (!(*b))
		return;
	if ((*b)->chunk == 2)
	{
		if ((*a)->chunk == 2)
		{
			pab(b, a, 'a');
			(*a)->chunk = 3;
			if (sorted(*a))
			{
				(*a)->chunk = 2;
			}
			if (*b && (*b)->chunk == 2)
			{
				pab(b, a, 'a');
				(*a)->chunk = 2;
			}
		}
	}
}
