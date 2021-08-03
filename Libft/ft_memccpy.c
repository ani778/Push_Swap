/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 18:22:57 by anhovhan          #+#    #+#             */
/*   Updated: 2021/02/02 20:39:10 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;
	int						i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	d = dst;
	s = src;
	while (n--)
	{
		d[i] = s[i];
		if (s[i++] == (unsigned char)c)
			return (d + i);
	}
	return (NULL);
}
