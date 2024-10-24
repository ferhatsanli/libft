/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:53:18 by fsanli            #+#    #+#             */
/*   Updated: 2024/10/24 22:09:54 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*         size -> always has to take size of destination                     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen(src);
	if (size > 0)
	{
		while (len_src > i && i < size - 1)
		{
			*(dst + i) = *(src + i);
			i++;
		}
		*(dst + i) = '\0';
	}
	return (len_src);
}
