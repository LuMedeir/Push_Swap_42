/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:22:40 by lumedeir          #+#    #+#             */
/*   Updated: 2023/08/31 11:41:07 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	unit;

	if (nb < 0)
	{
		write(fd, "-", 1);
		unit = (nb % 10) * -1 + '0';
	}
	else
		unit = (nb % 10) + '0';
	nb /= 10;
	if (nb < 1)
		nb *= -1;
	if (nb != 0)
		ft_putnbr_fd(nb, fd);
	write(fd, &unit, 1);
}
