/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:42:26 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/28 15:02:16 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libaux/libft.h"
//# include "../includes/ft_printf.h"
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}					t_list;
/*movements*/
void	pa(t_list **a, t_list **b, int flag);
void	pb(t_list **a, t_list **b, int flag);
void	ra(t_list **a, int flag);
void	rb(t_list **b, int flag);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a, int flag);
void	rrb(t_list **b, int flag);
void	rrr(t_list **a, t_list **b);
void	sa(t_list **a, int flag);
void	sb(t_list **b, int flag);
void	ss(t_list **a, t_list **b);
/*Parsing*/
int		validate_characters(char *num);
int		check_long_number(char *numbers);
int		check_atol(char *numbers);
void	check_parse(char *arg, t_list **stack_a);
void	check_dup(t_list **stack_a);
t_list	*create_node(int num);
t_list	*get_biggest_node(t_list *stack);
int		stack_len(t_list *stack);
t_list	*get_smallest_node(t_list *stack);
void	node_add_end(t_list **stack, t_list *node);
void	node_add_front(t_list **stack, t_list *node);
t_list	*node_get_last(t_list *first_node);
int		list_size(t_list *stack);
/*pushswap_utils*/
int		count_argv(t_list *stack);
void	free_lst(t_list **stack);
void	fun_error(t_list **stack);
void	put_index(t_list **stack_a);
void	check_sorted_list(t_list **stack_a);
int		sorted_list(t_list **stack_a);
void	insert_stack(t_list **stack_a, char **num);
void	free_array(char **array);
/*algorithms_utils*/
void	three_node(t_list **stack_a);
void	four_node(t_list **stack_a, t_list **stack_b);
void	five_node(t_list **stack_a, t_list **stack_b);
void	move_to_stack_b(t_list **stack_a, t_list **stack_b, int number);
int		count_rotations(t_list *stack, int max_index);
void	ksort(t_list **stack_a, t_list **stack_b, int number);

#endif