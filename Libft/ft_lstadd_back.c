/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 16:08:20 by anhovhan          #+#    #+#             */
/*   Updated: 2021/02/02 16:08:23 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *list;

	if (*lst)
	{
		list = ft_lstlast(*lst);
		list->next = new;
		new->next = NULL;
	}
	else
	{
		(*lst) = new;
		new->next = NULL;
	}
}
