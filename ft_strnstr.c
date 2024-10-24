/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:30:00 by fsanli            #+#    #+#             */
/*   Updated: 2024/10/24 17:35:29 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	len_l;
	char	*res;
	size_t	score;

	res = NULL;
	score = 0;
	len_l = ft_strlen(little);
	if (!len_l)
		return ((char *)big);
	i = 0;
	while (i < len)
	{
		if (big[i] == little[score])
			score++;
		else
			score = 0;
		if (score == 1)
			res = &big[i];
		else if (score == len_l)
			return (res);
		i++;
	}
	if (score < len_l)
		return (NULL);
	return (res);
}
