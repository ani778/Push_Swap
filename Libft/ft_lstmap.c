/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 17:34:11 by anhovhan          #+#    #+#             */
/*   Updated: 2021/02/02 20:31:59 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;

	if (!lst)
		return (NULL);
	if (!(head = ft_lstnew(f(lst->content))))
		ft_lstdelone(lst, del);
	else
	{
		temp = head;
		lst = lst->next;
	}
	while (lst)
	{
		if (!(temp->next = ft_lstnew(f(lst->content))))
			ft_lstdelone(lst, del);
		temp = temp->next;
		lst = lst->next;
	}
	return (head);
}
