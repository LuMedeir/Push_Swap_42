/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:51:45 by lumedeir          #+#    #+#             */
/*   Updated: 2023/09/08 11:23:34 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_str;
	size_t	count;
	size_t	aux;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	new_str = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2) + 1)));
	if (new_str == NULL)
		return (NULL);
	count = -1;
	aux = 0;
	if (s1)
		while (s1[++count] != '\0')
			new_str[count] = s1[count];
	while (s2[aux] != '\0')
		new_str[count++] = s2[aux++];
	new_str[count] = '\0';
	return (new_str);
}
