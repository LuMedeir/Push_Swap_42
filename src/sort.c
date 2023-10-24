/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:17:10 by lumedeir          #+#    #+#             */
/*   Updated: 2023/10/14 12:10:30 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_three(t_stack *stack_a)
{
	int	*value;

	value = (int *)malloc(3 * sizeof(int));
	value[0] = stack_a->start->value;
	value[1] = stack_a->start->next->value;
	value[2] = stack_a->start->next->next->value;
	if (value[0] > value[1] && value[0] < value[2])
		ft_swap_a(stack_a);
	else if (value[2] > value[1] && value[2] < value[0])
		ft_rotate_a(stack_a, 1);
	else if (value[0] > value[2] && value[0] < value[1])
		ft_reverse_rotate_a(stack_a, 1);
	else if (value[0] > value[1] && value[0] > value[2])
	{
		ft_swap_a(stack_a);
		ft_reverse_rotate_a(stack_a, 1);
	}
	else if (value[2] > value[0] && value[2] < value[1])
	{
		ft_swap_a(stack_a);
		ft_rotate_a(stack_a, 1);
	}
	ft_free_arr(value);
}

static void	ft_sort_five(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_a->size > 3)
	{
		if (stack_a->start->index == 1 || stack_a->start->index == 5)
			ft_push_b(stack_b, stack_a);
		else
			ft_rotate_a(stack_a, 1);
	}
	ft_sort_three(stack_a);
	while (stack_b->size > 0)
	{
		if (stack_b->start->index == 5)
		{
			ft_push_a(stack_a, stack_b);
			ft_rotate_a(stack_a, 1);
		}
		ft_push_a(stack_a, stack_b);
	}
}

void	ft_sort(t_stack *stack_a, t_stack *stack_b, t_moves *moves)
{
	if (stack_a->size < 4)
	{
		if (stack_a->size == 2)
			ft_swap_a(stack_a);
		else
			ft_sort_three(stack_a);
	}
	else
	{
		ft_get_index(stack_a);
		if (stack_a->size == 5 || stack_a->size == 4)
			ft_sort_five(stack_a, stack_b);
		else if (stack_a->size > 5)
			ft_big_sort(stack_a, stack_b, moves);
	}
}
