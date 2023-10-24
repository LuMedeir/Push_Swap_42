/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 17:46:53 by lumedeir          #+#    #+#             */
/*   Updated: 2023/08/31 11:41:40 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	count;
	unsigned int	size_src;

	count = 0;
	size_src = ft_strlen((char *)src);
	if (size > 0)
	{
		while (count < size - 1 && src[count] != 0)
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = '\0';
	}
	return (size_src);
}
