/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:53:00 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/28 15:18:44 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_sorted_list(t_list **stack_a)
{
	t_list	*node;

	node = *stack_a;
	while (node != NULL && node->next != NULL)
	{
		if (node->content > node->next->content)
		{
			return ;
		}
		node = node->next;
	}
	free_lst(stack_a);
	exit(0);
}

int	sorted_list(t_list **stack_a)
{
	t_list	*node;

	node = *stack_a;
	while (node != NULL && node->next != NULL)
	{
		if (node->content > node->next->content)
		{
			return (0);
		}
		node = node->next;
	}
	free_lst(stack_a);
	return (1);
}
