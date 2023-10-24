/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:32:07 by lumedeir          #+#    #+#             */
/*   Updated: 2023/09/18 16:33:09 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

long	ft_atol(char *str)
{
	int		sign;
	long	nmb;

	sign = 1;
	nmb = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nmb *= 10;
		nmb += (*str - '0');
		str++;
	}
	return (nmb *= sign);
}
