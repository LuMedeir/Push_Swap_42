/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:19:02 by lumedeir          #+#    #+#             */
/*   Updated: 2023/08/31 11:41:57 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*str3;
	unsigned char	*str4;
	size_t			count;

	str3 = (unsigned char *)str1;
	str4 = (unsigned char *)str2;
	count = 0;
	while ((count < n) && (str3[count] != '\0' || str4[count] != '\0'))
	{
		if (count < n && str3[count] != str4[count])
		{
			return (str3[count] - str4[count]);
		}
		count++;
	}
	return (0);
}
