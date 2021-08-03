/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 13:51:49 by anhovhan          #+#    #+#             */
/*   Updated: 2021/02/03 13:52:39 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (needle[i] == '\0')
		return (char *)(haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return (char *)(haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
