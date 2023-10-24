/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:00:40 by lumedeir          #+#    #+#             */
/*   Updated: 2023/10/16 09:15:47 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(0);
}

void	ft_free_arr(int *arr)
{
	if (arr != NULL)
		free(arr);
}

void	ft_free(t_stack *stack)
{
	t_node	*current;
	t_node	*temp;

	current = stack->start;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	stack->start = NULL;
	stack->size = 0;
	stack->i_max = 0;
	stack->i_min = 0;
}

void	ft_finish(t_stack *stack_a, t_stack *stack_b)
{
	ft_free(stack_a);
	ft_free(stack_b);
}
