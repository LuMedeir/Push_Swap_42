/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:49:46 by lumedeir          #+#    #+#             */
/*   Updated: 2023/08/31 11:42:02 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	count;
	size_t	len_little;

	count = 0;
	len_little = ft_strlen((char *)little);
	if (len_little == 0)
		return ((char *)big);
	while (count < len && big[count] != 0 && len - count >= len_little)
	{
		if (big[count] == little[0])
		{
			if (ft_strncmp((char *)big + count,
					(char *)little, len_little) == 0)
				return ((char *)big + count);
		}
		count++;
	}
	return (0);
}
