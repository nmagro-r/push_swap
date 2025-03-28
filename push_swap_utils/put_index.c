/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 13:24:01 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/28 15:17:16 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_index(t_list **stack_a)
{
	t_list	*temp;
	t_list	*current;
	int		index;

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
