/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:23:49 by lumedeir          #+#    #+#             */
/*   Updated: 2023/08/31 11:40:58 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*str2;
	size_t	count;

	str2 = (char *) str;
	count = 0;
	while (n > count)
	{
		str2[count] = c;
		count++;
	}
	return (str);
}
