/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:31:04 by lumedeir          #+#    #+#             */
/*   Updated: 2023/10/12 12:04:47 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	ft_find_min_and_max(t_stack *stack)
{
	int		index;
	t_node	*node;

	index = stack->start->index;
	node = stack->start;
	while (node->next != NULL)
	{
		if (node->next->index < index)
			index = node->next->index;
		node = node->next;
	}
	stack->i_min = index;
	index = stack->start->index;
	node = stack->start;
	while (node->next != NULL)
	{
		if (node->next->index > index)
			index = node->next->index;
		node = node->next;
	}
	stack->i_max = index;
}

void	ft_push_a(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*node_to_push;

	if (stack_b->start == NULL)
		return ;
	node_to_push = stack_b->start;
	stack_b->start = node_to_push->next;
	node_to_push->next = stack_a->start;
	stack_a->start = node_to_push;
	stack_a->size++;
	stack_b->size--;
	if (stack_a->size > 1)
		ft_find_min_and_max(stack_a);
	if (stack_b->size > 1)
		ft_find_min_and_max(stack_b);
	ft_putstr_fd("pa\n", 1);
}

void	ft_push_b(t_stack *stack_b, t_stack *stack_a)
{
	t_node	*node_to_push;

	if (stack_a->start == NULL)
		return ;
	node_to_push = stack_a->start;
	stack_a->start = node_to_push->next;
	node_to_push->next = stack_b->start;
	stack_b->start = node_to_push;
	stack_a->size--;
	stack_b->size++;
	if (stack_a->size > 1)
		ft_find_min_and_max(stack_a);
	if (stack_b->size > 1)
		ft_find_min_and_max(stack_b);
	ft_putstr_fd("pb\n", 1);
}
