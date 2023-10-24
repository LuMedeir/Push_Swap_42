/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:02:11 by lumedeir          #+#    #+#             */
/*   Updated: 2023/08/31 11:41:27 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *str)
{
	char	*str1;
	char	*dest;
	int		count;

	str1 = (char *)str;
	dest = malloc((ft_strlen(str1) + 1) * sizeof(char));
	count = 0;
	if (dest == NULL)
		return (0);
	while (str1[count] != '\0')
	{
		dest[count] = str1[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
