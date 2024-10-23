/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:07:02 by fsanli            #+#    #+#             */
/*   Updated: 2024/10/23 13:38:25 by fsanli           ###   ########.fr       */
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
	c1 = (void *)s1;
	c2 = (void *)s2;
	while (i < n)
	{
		printf("i:%ld, n:%ld --- ", i, n);
		printf("%c <-> %c => ", c1[i], c2[i]);
		if ((char)c1[i] == (char)c2[i])
			res += c1[i] - c2[i];
		printf("%d\n", res);
		i++;
	}
	return (res);
}
