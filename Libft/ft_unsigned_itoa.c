/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_itoa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:53:40 by lumedeir          #+#    #+#             */
/*   Updated: 2023/08/31 11:42:16 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_unsigned_itoa(unsigned int n)
{
	char	temp[12];
	int		index;
	char	*buffer;

	index = 11;
	buffer = NULL;
	if (n == 0)
		temp[index--] = '0';
	while (n != 0)
	{
			temp[index--] = n % 10 + '0';
			n /= 10;
	}
	buffer = ft_strdup(&temp[index + 1]);
	return (buffer);
}
