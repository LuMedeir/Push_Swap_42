/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:56:40 by lumedeir          #+#    #+#             */
/*   Updated: 2023/08/31 11:41:19 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		sizedest;
	size_t		sizesrc;
	size_t		count;

	if (size == 0 && dest == 0)
		return (0);
	sizedest = ft_strlen(dest);
	sizesrc = ft_strlen((char *)src);
	count = 0;
	if (size > sizedest)
	{
		while (src[count] != 0 && count + sizedest < size - 1)
		{
			dest[sizedest + count] = src[count];
			count++;
		}
		dest[sizedest + count] = '\0';
		return (sizesrc + sizedest);
	}
	return (sizesrc + size);
}
