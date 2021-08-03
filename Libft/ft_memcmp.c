/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 13:23:54 by anhovhan          #+#    #+#             */
/*   Updated: 2021/02/02 20:49:26 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*j1;
	const unsigned char	*j2;
	size_t				i;

	i = 0;
	j1 = s1;
	j2 = s2;
	if (n == '\0')
		return (0);
	while (i < n)
	{
		if (j1[i] - j2[i] != 0)
			return (j1[i] - j2[i]);
		i++;
	}
	return (0);
}
