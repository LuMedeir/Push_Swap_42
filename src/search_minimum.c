/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_minimum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:16:33 by lumedeir          #+#    #+#             */
/*   Updated: 2023/10/12 17:40:35 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_count_moves_r(t_stack *stack, int index)
{
	t_stack	*copy;
	int		count;

	copy = ft_copy_stack(stack);
	count = 0;
	while (copy->start->index != index)
	{
		ft_rotate_b(copy, 0);
		count++;
	}
	ft_free(copy);
	free(copy);
	return (count);
}

int	ft_count_moves_rr(t_stack *stack, int index)
{
	t_stack	*copy;
	int		count;

	copy = ft_copy_stack(stack);
	count = 0;
	while (copy->start->index != index)
	{
		ft_reverse_rotate_b(copy, 0);
		count++;
	}
	ft_free(copy);
	free(copy);
	return (count);
}

static void	ft_moves_a(int index, t_stack *stack_a, t_moves *moves)
{
	t_stack	*copy;
	int		count;

	copy = ft_copy_stack(stack_a);
	count = ft_count_position(stack_a, index);
	if (count <= stack_a->size / 2)
	{
		while (copy->start->index != index)
		{
			ft_rotate_a(copy, 0);
			moves->ra_moves++;
		}
	}
	else
	{
		while (copy->start->index != index)
		{
			ft_reverse_rotate_a(copy, 0);
			moves->rra_moves++;
		}
	}
	ft_free(copy);
	free(copy);
}

static void	ft_moves_b(int index, t_stack *stack_b, t_moves *moves)
{
	int		count_rb;
	int		count_rrb;

	count_rb = ft_count_moves_r(stack_b, ft_find_index_b(stack_b, index));
	count_rrb = ft_count_moves_rr(stack_b, ft_find_index_b(stack_b, index));
	if (count_rb < count_rrb)
		moves->rb_moves = count_rb;
	else
		moves->rrb_moves = count_rrb;
}

void	ft_search_min_moves(int index, t_stack *stack_a,
	t_stack *stack_b, t_moves *moves)
{
	int		total;
	t_moves	temp_moves;

	total = 0;
	ft_init_s_moves(&temp_moves);
	if (stack_a->start->index != index)
		ft_moves_a(index, stack_a, &temp_moves);
	ft_moves_b(index, stack_b, &temp_moves);
	total = temp_moves.ra_moves + temp_moves.rb_moves
		+ temp_moves.rra_moves + temp_moves.rrb_moves;
	if (total < moves->moves_min || moves->index_min == 0)
		ft_new_min(&temp_moves, moves, index, total);
}
