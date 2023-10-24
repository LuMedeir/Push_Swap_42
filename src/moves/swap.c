/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:25:18 by lumedeir          #+#    #+#             */
/*   Updated: 2023/10/12 12:05:26 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	ft_swap(t_stack *stack)
{
	int	temp_first;
	int	temp_index;

	if (stack->start == NULL || stack->start->next == NULL)
		return ;
	temp_first = stack->start->value;
	temp_index = stack->start->index;
	stack->start->value = stack->start->next->value;
	stack->start->index = stack->start->next->index;
	stack->start->next->value = temp_first;
	stack->start->next->index = temp_index;
}

void	ft_swap_a(t_stack *stack_a)
{
	ft_swap(stack_a);
	ft_putstr_fd("sa\n", 1);
}

void	ft_swap_b(t_stack *stack_b)
{
	ft_swap(stack_b);
	ft_putstr_fd("sb\n", 1);
}

void	ft_swap_ab(t_stack *stack_a, t_stack *stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	ft_putstr_fd("ss\n", 1);
}
