/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:02:00 by lumedeir          #+#    #+#             */
/*   Updated: 2023/10/11 14:43:39 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_check_duplicates(int argc, char **argv)
{
	int	index_ac;
	int	index;

	index_ac = 1;
	index = 2;
	while (index_ac < argc)
	{
		while (index < argc)
		{
			if (ft_atoi(argv[index_ac]) == ft_atoi(argv[index]))
				ft_error();
			index++;
		}
		index_ac++;
		index = index_ac + 1;
	}
}

static int	ft_check_digit(char *arg)
{
	int	index;

	index = 0;
	if (arg[0] == '-' || arg[0] == '+')
		index++;
	if (!ft_isdigit(arg[index]))
		return (0);
	while (arg[index])
	{
		if (!ft_isdigit(arg[index]))
			return (0);
		index++;
	}
	return (1);
}

static int	ft_check_int(char *arg)
{
	long	number;

	number = ft_atol(arg);
	if (number > INT_MAX || number < INT_MIN)
		return (0);
	return (1);
}

static int	ft_is_sorted(int argc, char **argv)
{
	int	index;
	int	number1;
	int	number2;

	index = 1;
	while (index < (argc - 1))
	{
		number1 = ft_atoi(argv[index]);
		number2 = ft_atoi(argv[index + 1]);
		if (number1 > number2)
			return (1);
		index++;
	}
	return (0);
}

void	ft_check_args(int argc, char **argv)
{
	int	index_ac;

	if (argc == 2 && argv[1] == NULL)
		ft_error();
	index_ac = 1;
	ft_check_duplicates(argc, argv);
	while (index_ac < argc)
	{
		if (!ft_check_digit(argv[index_ac]))
			ft_error();
		else if (!ft_check_int(argv[index_ac]))
			ft_error();
		index_ac++;
	}
	if (!ft_is_sorted(argc, argv))
		exit(0);
}
