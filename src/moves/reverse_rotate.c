/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:35:09 by lumedeir          #+#    #+#             */
/*   Updated: 2023/10/12 12:05:34 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	ft_reverse_rotate(t_stack *stack)
{
	t_node	*temp_prev;
	t_node	*current;

	temp_prev = NULL;
	current = stack->start;
	if (stack->start == NULL || stack->start->next == NULL)
		return ;
	while (current->next != NULL)
	{
		temp_prev = current;
		current = current->next;
	}
	current->next = stack->start;
	stack->start = current;
	temp_prev->next = NULL;
}

void	ft_reverse_rotate_a(t_stack *stack_a, int number)
{
	ft_reverse_rotate(stack_a);
	if (number == 1)
		ft_putstr_fd("rra\n", 1);
}

void	ft_reverse_rotate_b(t_stack *stack_b, int number)
{
	ft_reverse_rotate(stack_b);
	if (number == 1)
		ft_putstr_fd("rrb\n", 1);
}

void	ft_reverse_rotate_ab(t_stack *stack_a, t_stack *stack_b, int number)
{
	ft_reverse_rotate(stack_a);
	ft_reverse_rotate(stack_b);
	if (number == 1)
		ft_putstr_fd("rrr\n", 1);
}
