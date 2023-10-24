/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:17:13 by lumedeir          #+#    #+#             */
/*   Updated: 2023/08/31 11:40:38 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_itoa_base(size_t n, char *base)
{
	char	*str;
	size_t	num_size;
	size_t	num;

	num = n;
	num_size = 1;
	while (n >= 16)
	{
		n /= 16;
		num_size++;
	}
	str = ft_calloc((num_size + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	while (num_size--)
	{
		str[num_size] = base[num % 16];
		num /= 16;
	}
	return (str);
}
