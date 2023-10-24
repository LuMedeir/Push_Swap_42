/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:50:59 by lumedeir          #+#    #+#             */
/*   Updated: 2023/10/12 13:45:18 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static t_node	*ft_copy_node(int value, int index)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (0);
	new_node->value = value;
	new_node->index = index;
	new_node->next = NULL;
	return (new_node);
}

t_stack	*ft_copy_stack(t_stack *original)
{
	t_stack	*copied;
	t_node	*current;
	t_node	**new_next_ptr;
	t_node	*new_node;

	copied = (t_stack *)malloc(sizeof(t_stack));
	if (!copied)
		return (0);
	copied->start = NULL;
	current = original->start;
	new_next_ptr = &copied->start;
	while (current != NULL)
	{
		new_node = ft_copy_node(current->value, current->index);
		*new_next_ptr = new_node;
		new_next_ptr = &new_node->next;
		current = current->next;
	}
	copied->i_max = original->i_max;
	copied->i_min = original->i_min;
	return (copied);
}

t_node	*ft_last_node(t_stack *stack)
{
	t_node	*last;

	last = stack->start;
	while (last->next != NULL)
		last = last->next;
	return (last);
}

int	*ft_copy(t_stack *stack_a)
{
	t_node	*node;
	int		*copy;
	int		index;

	copy = (int *)malloc((stack_a->size) * sizeof(int));
	if (!copy)
		return (0);
	node = stack_a->start;
	index = 0;
	while (node->next != NULL)
	{
		copy[index] = node->value;
		index++;
		node = node->next;
	}
	copy[index] = node->value;
	return (copy);
}
