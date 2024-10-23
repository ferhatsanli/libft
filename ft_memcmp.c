/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:07:02 by fsanli            #+#    #+#             */
/*   Updated: 2024/10/23 14:20:18 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*c1;
	char	*c2;
	size_t	i;
	int		res;

	res = 0;
	c1 = (char *)s1;
	c2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		res += c1[i] - c2[i];
		i++;
	}
	return (res);
}
