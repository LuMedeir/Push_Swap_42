/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:48:34 by lumedeir          #+#    #+#             */
/*   Updated: 2023/10/11 14:17:32 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_init_s_moves(t_moves *moves)
{
	moves->index_min = 0;
	moves->moves_min = 0;
	moves->ra_moves = 0;
	moves->rb_moves = 0;
	moves->rr_moves = 0;
	moves->rra_moves = 0;
	moves->rrb_moves = 0;
	moves->rrr_moves = 0;
}

void	ft_new_min(t_moves *temp_moves, t_moves *moves,
	int index, int total)
{
	moves->index_min = index;
	moves->ra_moves = temp_moves->ra_moves;
	moves->rb_moves = temp_moves->rb_moves;
	moves->rra_moves = temp_moves->rra_moves;
	moves->rrb_moves = temp_moves->rrb_moves;
	moves->moves_min = total;
}

static t_node	*ft_new_node(int number)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (0);
	new->value = number;
	new->next = NULL;
	return (new);
}

void	ft_creat_stack(t_stack *stack, int argc, char **argv)
{
	t_node	*current_node;
	int		index;
	int		number;

	number = ft_atoi(argv[1]);
	stack->start = ft_new_node(number);
	current_node = stack->start;
	index = 2;
	while (index < argc)
	{
		number = ft_atoi(argv[index]);
		current_node->next = ft_new_node(number);
		current_node = current_node->next;
		stack->size++;
		index++;
	}
}
