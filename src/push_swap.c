/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:55:46 by lumedeir          #+#    #+#             */
/*   Updated: 2023/10/12 12:51:07 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_init_structs(t_stack *stack_a, t_stack *stack_b)
{
	stack_a->start = NULL;
	stack_a->size = 1;
	stack_a->i_max = 0;
	stack_a->i_min = 0;
	stack_b->start = NULL;
	stack_b->size = 0;
	stack_b->i_max = 0;
	stack_b->i_min = 0;
}

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	t_moves	moves;

	ft_check_args(argc, argv);
	ft_init_structs(&stack_a, &stack_b);
	ft_creat_stack(&stack_a, argc, argv);
	ft_sort(&stack_a, &stack_b, &moves);
	ft_finish(&stack_a, &stack_b);
}
