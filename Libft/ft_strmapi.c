/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:25:24 by lumedeir          #+#    #+#             */
/*   Updated: 2023/08/31 11:41:48 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	int		s_len;
	char	*temp;

	if (s == 0)
		return (0);
	index = 0;
	s_len = ft_strlen((char *)s);
	temp = (char *)malloc(s_len + 1 * sizeof(char));
	if (temp == 0)
		return (0);
	while (s[index])
	{
		temp[index] = f(index, s[index]);
		index++;
	}
	temp[index] = 0;
	return (temp);
}
