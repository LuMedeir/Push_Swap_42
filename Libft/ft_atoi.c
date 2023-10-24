/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:04:30 by lumedeir          #+#    #+#             */
/*   Updated: 2023/05/23 08:54:14 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	count;
	int	number;
	int	sign;

	number = 0;
	count = 0;
	sign = 1;
	while (str[count] == ' ' || ('\t' <= str[count] && str[count] <= '\r'))
		count++;
	if (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			sign = -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		number = (number * 10) + (str[count] - '0');
		count++;
	}
	return (number * sign);
}
