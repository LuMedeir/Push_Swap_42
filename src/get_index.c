/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:15:45 by lumedeir          #+#    #+#             */
/*   Updated: 2023/10/16 10:38:39 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	*ft_bobble_sort(t_stack *stack_a)
{
	int		*copy;
	int		index;
	int		temp2;

	copy = ft_copy(stack_a);
	index = 0;
	temp2 = 0;
	while (index < (stack_a->size - 1))
	{
		if (copy[index] > copy[index + 1])
		{
			temp2 = copy[index];
			copy[index] = copy[index + 1];
			copy[index + 1] = temp2;
			index = 0;
		}
		else
			index++;
	}
	return (copy);
}

static void	ft_put_index(t_stack *stack_a, int *sort)
{
	int		index;
	t_node	*node;

	index = 0;
	node = stack_a->start;
	node->index = 0;
	while (node->index == 0)
	{
		index = 0;
		while (index <= (stack_a->size - 1))
		{
			if (node->value == sort[index])
			{
				node->index = index + 1;
				break ;
			}
			index++;
		}
		if (node->next)
		{
			node = node->next;
			node->index = 0;
		}
	}
}

int	ft_count_position(t_stack *stack, int index)
{
	t_node	*node;
	int		count;

	node = stack->start;
	count = 0;
	while (node->index != index)
	{
		node = node->next;
		count++;
	}
	return (count);
}

void	ft_get_index(t_stack *stack_a)
{
	int		*sort;

	sort = ft_bobble_sort(stack_a);
	ft_put_index(stack_a, sort);
	ft_free_arr(sort);
}

int	ft_find_index_b(t_stack *stack_b, int index)
{
	t_node	*prev;
	t_node	*temp;

	temp = stack_b->start;
	if (index > stack_b->i_max || index < stack_b->i_min)
	{
		while (temp->index != stack_b->i_max)
			temp = temp->next;
		return (temp->index);
	}
	else
	{
		prev = ft_last_node(stack_b);
		while (prev->index < index || temp->index > index)
		{
			prev = temp;
			temp = temp->next;
		}
	}
	return (temp->index);
}
