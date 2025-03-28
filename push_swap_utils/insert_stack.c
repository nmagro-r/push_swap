/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:30:34 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/28 15:20:26 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert_stack(t_list **stack_a, char **num)
{
	int		i;
	t_list	*to_insert;

	i = 1;
	if (num[i] == NULL)
		exit(0);
	while (num[i] != NULL)
	{
		check_parse(num[i], stack_a);
		to_insert = create_node(ft_atoi(num[i]));
		node_add_end(stack_a, to_insert);
		i++;
	}
	check_dup(stack_a);
	check_sorted_list(stack_a);
}
