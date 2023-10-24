/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_to_pointer.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:54:57 by lumedeir          #+#    #+#             */
/*   Updated: 2023/08/31 11:40:20 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_convert_to_pointer(unsigned long *pointer)
{
	int		len;
	char	*str;

	if (!pointer)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	ft_putchar_fd('0', 1);
	ft_putchar_fd('x', 1);
	str = ft_itoa_base((unsigned long)pointer, G_HEX_BASE_LOWER);
	ft_putstr_fd(str, 1);
	len = ft_strlen(str);
	free (str);
	return (len + 2);
}
