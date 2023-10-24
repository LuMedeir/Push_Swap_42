/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:53:41 by lumedeir          #+#    #+#             */
/*   Updated: 2023/08/31 11:41:01 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_convert(char type, va_list ap)
{
	if (type == 'c')
		return (ft_convert_to_char(va_arg(ap, int)));
	if (type == 's')
		return (ft_convert_to_str(va_arg(ap, char *)));
	if (type == 'i')
		return (ft_convert_to_decimal(va_arg(ap, int)));
	if (type == 'p')
		return (ft_convert_to_pointer(va_arg(ap, void *)));
	if (type == 'd')
		return (ft_convert_to_decimal(va_arg(ap, int)));
	if (type == 'u')
		return (ft_convert_to_udecimal(va_arg(ap, unsigned int)));
	if (type == 'x')
		return (ft_convert_to_lowhexa(va_arg(ap, unsigned int)));
	if (type == 'X')
		return (ft_convert_to_uphexa(va_arg(ap, unsigned int)));
	if (type == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;
	int		len;

	if (str == NULL)
		return (0);
	va_start(ap, str);
	count = 0;
	len = 0;
	while (str[count] != '\0')
	{
		if (str[count] == '%')
		{
			len += ft_convert(str[count + 1], ap);
			count += 2;
			continue ;
		}
		else
			ft_putchar_fd(str[count], 1);
		len++;
		count++;
	}
	va_end(ap);
	return (len);
}
