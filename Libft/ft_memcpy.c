/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:10:57 by lumedeir          #+#    #+#             */
/*   Updated: 2023/08/31 11:40:51 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*temp;
	char	*temp2;

	if (src == 0 && dest == 0)
		return (0);
	count = 0;
	temp = (char *) dest;
	temp2 = (char *) src;
	while (n > count)
	{
		temp[count] = temp2[count];
		count++;
	}
	return (dest);
}
