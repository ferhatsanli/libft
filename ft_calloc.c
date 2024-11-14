/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:38:11 by fsanli            #+#    #+#             */
/*   Updated: 2024/11/10 22:24:39 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	total;

	if (size == 0 || nmemb == 0)
	{
		return (malloc(0));
	}
	if (size > SIZE_MAX / nmemb)
	{
		printf("oldu>>%ld, %ld\n", nmemb, size);
		return (NULL);
	}
	total = nmemb * size;
	res = malloc(total);
	if (!res)
		return (NULL);
	ft_bzero(res, total);
	return (res);
}
