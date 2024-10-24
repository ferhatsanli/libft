/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:01:54 by fsanli            #+#    #+#             */
/*   Updated: 2024/10/24 22:12:01 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				ret;

	i = 0;
	ret = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && n > 1)
	{
		ret += s1[i] - s2[i];
		i++;
		n--;
	}
	return (ret);
}
