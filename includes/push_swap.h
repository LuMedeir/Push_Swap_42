/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:58:03 by lumedeir          #+#    #+#             */
/*   Updated: 2023/10/14 10:20:32 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <limits.h>

//..........................................STRUCTS

typedef struct s_node{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

typedef struct s_stack{
	t_node	*start;
	int		size;
	int		i_min;
	int		i_max;
}	t_stack;

typedef struct s_moves{
	int	ra_moves;
	int	rb_moves;
	int	rr_moves;
	int	rra_moves;
	int	rrb_moves;
	int	rrr_moves;
	int	moves_min;
	int	index_min;
}	t_moves;

//                                          FUNCTIONS

//	Frees and finish functions
void	ft_error(void);
void	ft_free(t_stack *stack);
void	ft_free_arr(int *arr);
void	ft_finish(t_stack *stack_a, t_stack *stack_b);

// Handles functions
int		*ft_copy(t_stack *stack_a);
t_stack	*ft_copy_stack(t_stack *original);
t_node	*ft_last_node(t_stack *node);

//	init functions
void	ft_check_args(int argc, char **argv);
void	ft_creat_stack(t_stack *stack, int argc, char **argv);
void	ft_init_s_moves(t_moves *moves);

//	Manipulating stacks functions
void	ft_swap_a(t_stack *stack_a);
void	ft_swap_b(t_stack *stack_b);
void	ft_swap_ab(t_stack *stack_a, t_stack *stack_b);
void	ft_push_a(t_stack *stack_a, t_stack *stack_b);
void	ft_push_b(t_stack *stack_b, t_stack *stack_a);
void	ft_rotate_a(t_stack *stack_a, int number);
void	ft_rotate_b(t_stack *stack_b, int number);
void	ft_rotate_ab(t_stack *stack_a, t_stack *stack_b, int number);
void	ft_reverse_rotate_a(t_stack *stack_a, int number);
void	ft_reverse_rotate_b(t_stack *stack_b, int number);
void	ft_reverse_rotate_ab(t_stack *stack_a, t_stack *stack_b, int number);

//	Sorts functions
void	ft_sort(t_stack *stack_a, t_stack *stack_b, t_moves *moves);
void	ft_big_sort(t_stack *stack_a, t_stack *stack_b, t_moves *moves);
void	ft_get_index(t_stack *stack_a);
int		ft_find_index_b(t_stack *list, int index);
int		ft_count_position(t_stack *stack, int index);
int		ft_count_moves_rr(t_stack *stack, int index);
int		ft_count_moves_r(t_stack *stack, int index);
void	ft_search_min_moves(int index, t_stack *stack_a,
			t_stack *stack_b, t_moves *moves);
void	ft_new_min(t_moves *temp_moves, t_moves *moves,
			int index, int total);
void	ft_search_min_moves_test(int index, t_stack *stack_a,
			t_stack *stack_b, t_moves *moves);

#endif