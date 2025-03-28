/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 18:15:49 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/28 14:57:27 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	int	len;

	check_dup(stack_a);
	put_index(stack_a);
	len = stack_len(*stack_a);
	if (len == 2)
		sa(stack_a, 1);
	else if (len == 3)
		three_node(stack_a);
	else if (len == 4)
		four_node(stack_a, stack_b);
	else if (len == 5)
		five_node(stack_a, stack_b);
	else
		ksort(stack_a, stack_b, len);
	free_lst(stack_a);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;
	char	**nums;

	nums = NULL;
	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	(void)argc;
	insert_stack(&stack_a, argv);
	put_index(&stack_a);
	push_swap(&stack_a, &stack_b);
}
