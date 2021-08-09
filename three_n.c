#include "push_swap.h"

void three_n(t_stack **lst)
{
	int a;
	int b;
	int c;

	if (new_chunk_length(*lst) != 3)
		return;
	a = (*lst)->val;
	b = (*lst)->next->val;
	c = (*lst)->next->next->val;
	if (b < a && a < c)
		sab(lst, 'a');
	else if (c < b && b < a)
	{
		sab(lst, 'a');
		rrab(lst, 'a');
	}
	else if (b < c && c < a)
		rab(lst, 'a');
	else if (a < c && c < b)
	{
		sab(lst, 'a');
		rab(lst, 'a');
	}
	else if (c < a && a < b)
		rrab(lst, 'a');
}
