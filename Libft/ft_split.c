/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:43:24 by lumedeir          #+#    #+#             */
/*   Updated: 2023/09/08 11:23:18 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_count(char const *s, char c)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static int	ft_move(char **str, const char *s, int len, int *count)
{
	int	i;

	str[*count] = (char *)malloc((len + 1) * sizeof(char));
	if (str[*count] == 0)
	{
		i = 0;
		while (*count > i)
		{
			free(str[i++]);
		}
		return (1);
	}
	ft_memcpy(str[*count], s, len);
	str[*count][len] = 0;
	(*count)++;
	return (0);
}

char	**ft_split(const char *s, char c)
{
	int		index;
	int		count;
	int		position;
	char	**str;

	if (s == 0)
		return (NULL);
	str = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	index = 0;
	count = 0;
	while (s[index])
	{
		while (s[index] == c)
			index++;
		position = index;
		while (s[index] && s[index] != c)
			index++;
		if (index > position)
			if (ft_move(str, s + position, index - position, &count))
				break ;
	}
	str[count] = NULL;
	return (str);
}
