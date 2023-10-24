/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:10:40 by lumedeir          #+#    #+#             */
/*   Updated: 2023/08/31 11:40:44 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*str2;
	size_t	count;

	str2 = (char *) str;
	count = 0;
	while (n > count)
	{
		if (str2[count] == (char)c)
			return (&str2[count]);
		count++;
	}
	return (0);
}
