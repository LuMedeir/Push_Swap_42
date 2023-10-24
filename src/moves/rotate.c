/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:37:07 by lumedeir          #+#    #+#             */
/*   Updated: 2023/10/16 10:50:23 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	ft_rotate(t_stack *stack)
{
	int		temp_first;
	int		temp_index;
	t_node	*node;

	if (stack->start == NULL || stack->start->next == NULL)
		return ;
	temp_index = 0;
	temp_first = stack->start->value;
	temp_index = stack->start->index;
	node = stack->start;
	while (node->next != NULL)
	{
		node->value = node->next->value;
		node->index = node->next->index;
		node = node->next;
	}
	node->value = temp_first;
	node->index = temp_index;
}

void	ft_rotate_a(t_stack *stack_a, int number)
{
	ft_rotate(stack_a);
	if (number == 1)
		ft_putstr_fd("ra\n", 1);
}

void	ft_rotate_b(t_stack *stack_b, int number)
{
	ft_rotate(stack_b);
	if (number == 1)
		ft_putstr_fd("rb\n", 1);
}

void	ft_rotate_ab(t_stack *stack_a, t_stack *stack_b, int number)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	if (number == 1)
		ft_putstr_fd("rr\n", 1);
}
