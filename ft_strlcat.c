/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:18:29 by fsanli            #+#    #+#             */
/*   Updated: 2024/10/22 21:08:21 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	char	*temp;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst == size)
		return (size + len_src);
	i = 0;
	while ((len_dst + i) < (size - 1) && src[i] != '\0')
	{
		*(dst + len_dst + i) = *(src + i);
		i++;
	}
	*(dst + len_dst + i) = '\0';
	return (len_dst + len_src);
}
