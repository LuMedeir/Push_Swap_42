/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:55:26 by lumedeir          #+#    #+#             */
/*   Updated: 2023/08/31 11:40:47 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*str3;
	unsigned char	*str4;
	size_t			count;

	str3 = (unsigned char *) str1;
	str4 = (unsigned char *) str2;
	count = 0;
	while (n > count)
	{
		if (str3[count] > str4[count])
			return (str3[count] - str4[count]);
		if (str3[count] < str4[count])
			return (str3[count] - str4[count]);
		count++;
	}
	return (0);
}
