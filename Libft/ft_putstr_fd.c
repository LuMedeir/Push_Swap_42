/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:28:50 by lumedeir          #+#    #+#             */
/*   Updated: 2023/08/31 11:41:10 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	c;

	c = 0;
	if (s == 0)
		return ;
	while (s[c] != '\0')
	{
		ft_putchar_fd(s[c], fd);
		c++;
	}
}
