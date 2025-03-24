/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:42:26 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/21 15:39:38 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "libaux/libft.h"
//# include "../includes/ft_printf.h"
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;

	int				index;
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
t_list  *create_node(int num);
t_list  *get_biggest_node(t_list *stack);
int	stack_length(t_list *stack);
t_list  *get_smallest_node(t_list *stack);
void    node_add_end(t_list **stack, t_list *node);
void    node_add_front(t_list **stack, t_list *node);
t_list  *node_get_last(t_list *first_node);
#endif