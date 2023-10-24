/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:48:24 by lumedeir          #+#    #+#             */
/*   Updated: 2023/08/31 11:40:55 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*str1;
	char	*str2;

	count = 0;
	str1 = (char *) dest;
	str2 = (char *) src;
	if (str1 == 0 && str2 == 0)
		return (str1);
	if (dest > src)
	{
		while (n--)
			str1[n] = str2[n];
	}
	else
	{
		while (count < n)
		{
			str1[count] = str2[count];
			count++;
		}
	}
	return (str1);
}
