/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:50:27 by lumedeir          #+#    #+#             */
/*   Updated: 2023/08/31 11:42:11 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*ft_strncpy(char *dest, const char *src, size_t num)
{
	char	*ptr;

	if (dest == 0 || src == 0)
		return (dest);
	ptr = dest;
	while (*src && num > 0)
	{
		*dest++ = *src++;
		num--;
	}
	while (num--)
		*dest++ = '\0';
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	count;
	size_t	size_s;

	if (s == NULL)
		return (0);
	size_s = ft_strlen((char *)s);
	if (start >= size_s || start - size_s <= len)
		return (ft_strdup(""));
	count = len;
	if (start + count > size_s)
		count = size_s - start;
	sub = (char *)malloc(sizeof(char) * count + 1);
	if (sub == NULL)
		return (NULL);
	ft_strncpy(sub, s + start, count);
	sub[count] = 0;
	return (sub);
}
