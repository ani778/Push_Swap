/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 20:00:56 by anhovhan          #+#    #+#             */
/*   Updated: 2021/02/03 13:09:53 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pointer;
	int		s_len;

	s_len = ft_strlen(s);
	pointer = (char*)s + s_len - 1;
	if (c == '\0')
	{
		pointer++;
		return (pointer);
	}
	while (s_len != 0)
	{
		if (*pointer == c)
		{
			return (pointer);
		}
		s_len--;
		pointer--;
	}
	return (NULL);
}
