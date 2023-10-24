/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:11:35 by lumedeir          #+#    #+#             */
/*   Updated: 2023/05/22 13:38:46 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int		count;
	char	*str2;

	count = 0;
	str2 = (char *)str;
	while (str2[count] != '\0')
	{
		if (str2[count] == (char)c)
		{
			return (&str2[count]);
		}
		count++;
	}
	if (str2[count] == c)
		return (&str2[count]);
	return (0);
}
