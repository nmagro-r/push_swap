/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 18:15:49 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/31 15:39:50 by nmagro-r         ###   ########.fr       */
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
	{
		ksort(stack_a, stack_b, len);
	}
	free_lst(stack_a);
}

static void	ft_free_matrix(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
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
	if (argc < 2)
		return (0);
	while (argv[i] != NULL)
	{
		nums = ft_split(argv[i], ' ');
		insert_stack(&stack_a, nums);
		ft_free_matrix(nums);
		i++;
	}
	check_sorted_list(&stack_a);
	push_swap(&stack_a, &stack_b);
	free_lst(&stack_a);
	return (0);
}
