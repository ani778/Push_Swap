/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 15:50:11 by anhovhan          #+#    #+#             */
/*   Updated: 2021/07/16 15:50:13 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_swap(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}
char *ft_strjoin(char const *s1, char const *s2)
{
  int idx;
  int idx_join;
  char *join;

  if (!s1 || !s2 || !(join = malloc(sizeof(char) * (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 2))))
    return (NULL);
  idx = 0;
  idx_join = 0;
  while (s1[idx])
    join[idx_join++] = s1[idx++];
  idx = 0;
  join[idx_join++] = ' ';
  while (s2[idx])
    join[idx_join++] = s2[idx++];
  join[idx_join] = '\0';
  return (join);
}

int ft_strlen(const char *str)
{
  const char *s;
  int i;

  s = str;
  i = 0;
  while (*s != '\0')
  {
    i++;
    s++;
  }
  return (i);
}
char *ft_substr(char const *s, unsigned int start, size_t len)
{
  unsigned int idx;
  char *modified_s;

  if (!s || !(modified_s = malloc(sizeof(char) * (len + 1))))
    return (NULL);
  idx = 0;
  while ((int)start < ft_strlen((char *)s) && s[start + idx] && idx < len)
  {
    modified_s[idx] = s[start + idx];
    idx++;
  }
  modified_s[idx] = '\0';
  return (modified_s);
}

int ft_atoi(const char *str)
{
  int sign;
  int n;
  long int nb;

  sign = 1;
  nb = 0;
  while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r')
  {
    str++;
  }
  if (*str == '-')
  {
    sign = -1;
    str++;
  }
  else if (*str == '+')
    str++;
  while (*str >= '0' && *str <= '9')
  {
    nb = nb * 10 + (*str - '0');
    str++;
  }
  if (nb > 2147483647 || nb < -2147483648)
    error_exit(1);
  n = nb;
  //free((char *)str);
  return (n * sign);
}
