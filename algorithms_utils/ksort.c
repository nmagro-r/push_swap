/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:09:09 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/28 15:21:50 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_to_stack_b(t_list **stack_a, t_list **stack_b, int number)
{
	int	i;
	int	range;

	i = 0;
	range = ft_sqrt(number) * 1.4;
	while (*stack_a)
	{
		if ((*stack_a)->index <= i)
		{
			pb(stack_a, stack_b, 1);
			if (count_argv(*stack_b) > 1)
				rb(stack_b, 1);
			i++;
		}
		else if ((*stack_a)->index <= i + range)
		{
			pb(stack_a, stack_b, 1);
			i++;
		}
		else
			ra(stack_a, 1);
	}
}

int	count_rotations(t_list *stack, int max_index)
{
	int	count;

	count = 0;
	while (stack != NULL && stack->index != max_index)
	{
		stack = stack->next;
		count++;
	}
	return (count);
}

void	ksort(t_list **stack_a, t_list **stack_b, int number)
{
	int	rb_count;
	int	rrb_count;

	move_to_stack_b(stack_a, stack_b, number);
	while ((number - 1) >= 0)
	{
		rb_count = count_rotations((*stack_b), (number - 1));
		rrb_count = number - rb_count;
		if (rb_count <= rrb_count)
		{
			while ((*stack_b)->index != (number - 1))
				rb(stack_b, 1);
			pa(stack_a, stack_b, 1);
			number--;
		}
		else
		{
			while ((*stack_b)->index != (number - 1))
				rrb(stack_b, 1);
			pa(stack_a, stack_b, 1);
			number--;
		}
	}
}
