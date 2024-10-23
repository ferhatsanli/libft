/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:24:28 by fsanli            #+#    #+#             */
/*   Updated: 2024/10/23 15:36:35 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	end;
	size_t	i;
	int		res;
	int		mul;
	char	dig;

	end = ft_strlen(nptr) - 1;
	i = 0;
	res = 0;
	mul = 1;
	while (i <= end)
	{
		dig = (char)nptr[end - i];
		if (ft_isdigit(dig))
			res += ((dig - 48) * mul);
		else if (dig == '-' && i == end)
			res *= -1;
		else if (dig == '+' && i == end)
			res *= 1;
		else
			return (0);
		mul *= 10;
		i++;
	}
	return (res);
}
