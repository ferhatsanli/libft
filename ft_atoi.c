/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:24:28 by fsanli            #+#    #+#             */
/*   Updated: 2024/10/23 15:05:38 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	end;
	size_t	i;
	int		res;
	int		mul;
	char	test_c;

	end = ft_strlen(nptr) - 1;
	printf("end => %ld\n", end);
	i = 0;
	res = 0;
	mul = 1;
	while (end - i >= 0)
	{
		test_c = (char)nptr[end - i];
		printf("i => %ld, char => %c\n", i, test_c);
		if (ft_isdigit(test_c))
			res += ((nptr[end - i] - 48) * mul);
		else
			return (0);
		mul *= 10;
		i++;
	}
	return (res);
}
