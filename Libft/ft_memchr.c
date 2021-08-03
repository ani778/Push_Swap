/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:42:19 by anhovhan          #+#    #+#             */
/*   Updated: 2021/02/03 14:44:50 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	int					i;

	i = 0;
	str = s;
	while (n--)
	{
		if (str[i] == (unsigned char)c)
			return (void *)(s + i);
		++i;
	}
	return (NULL);
}
