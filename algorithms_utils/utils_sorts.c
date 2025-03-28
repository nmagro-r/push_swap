/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sorts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:28:52 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/28 15:21:30 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	three_node(t_list **stack_a)
{
	if ((*stack_a)->index == 0 && (*stack_a)->next->index == 1)
		return ;
	else if ((*stack_a)->index == 0 && (*stack_a)->next->index == 2)
	{
		sa(stack_a, 1);
		ra(stack_a, 1);
	}
	else if ((*stack_a)->index == 1 && (*stack_a)->next->index == 0)
		sa(stack_a, 1);
	else if ((*stack_a)->index == 1 && (*stack_a)->next->index == 2)
		rra(stack_a, 1);
	else if ((*stack_a)->index == 2 && (*stack_a)->next->index == 1)
	{
		sa(stack_a, 1);
		rra(stack_a, 1);
	}
	else if ((*stack_a)->index == 2 && (*stack_a)->next->index == 0)
		ra(stack_a, 1);
}

void	four_node(t_list **stack_a, t_list **stack_b)
{
	while ((*stack_a)->index < 3)
		ra(stack_a, 1);
	pb(stack_a, stack_b, 1);
	three_node(stack_a);
	pa(stack_a, stack_b, 1);
	ra(stack_a, 1);
}

void	five_node(t_list **stack_a, t_list **stack_b)
{
	while ((*stack_a)->index < 3)
		ra(stack_a, 1);
	while ((*stack_a)->index >= 3)
		pb(stack_a, stack_b, 1);
	three_node(stack_a);
	pa(stack_a, stack_b, 1);
	if ((*stack_a)->index == 3)
		ra(stack_a, 1);
	pa(stack_a, stack_b, 1);
	ra(stack_a, 1);
	if ((*stack_a)->index >= 3)
		ra(stack_a, 1);
}
