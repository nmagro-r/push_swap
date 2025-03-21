/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 14:35:56 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/21 14:53:06 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	count_argv(t_list *stack)
{
	int	count;

	count = 0;
	while (stack)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}

void	put_index(t_list **stack_a)
{
	t_list *temp;
	t_list *current;
	int	index;

	temp = *stack_a;
	while (temp != NULL)
	{
		index = 0;
		current = *stack_a;
		while (current != NULL)
		{
			if (temp->content > current->content)
				index++;
			current = current->next;
		}
		temp->index = index;
		temp = temp->next;
	}
}