/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:02:32 by lumedeir          #+#    #+#             */
/*   Updated: 2023/08/31 11:42:04 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		size;
	char	*str2;

	size = ft_strlen((char *)str);
	str2 = (char *)str;
	while (size != 0)
	{
		if (str2[size] == (char)c)
			return (&str2[size]);
		size--;
	}
	if (str2[size] == (char)c)
		return (&str2[size]);
	return (0);
}
