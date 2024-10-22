/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:59:22 by fsanli            #+#    #+#             */
/*   Updated: 2024/10/22 21:07:53 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const void	*dest_end;
	const void	*src_end;
	void		*temp;

	dest_end = dest + n;
	src_end = src + n;
	if (dest <= src_end && src <= dest_end)
	{
		temp = malloc(n);
		ft_memcpy(temp, src, n);
		ft_memcpy(dest, temp, n);
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
