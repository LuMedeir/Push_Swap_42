/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:40:57 by lumedeir          #+#    #+#             */
/*   Updated: 2023/08/31 11:42:08 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char *s1, char *set)
{
	int		start;
	int		end;
	int		len;
	char	*str;

	if (s1 == 0 || set == 0)
		return (NULL);
	start = 0;
	while (s1[start] != 0 && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen((char *)s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start + 1;
	str = (char *)malloc(sizeof(char) * (len));
	if (str == 0)
		return (NULL);
	ft_strlcpy(str, (char *)(s1 + start), len);
	free(s1);
	return (str);
}
