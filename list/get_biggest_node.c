/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_biggest_node.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 13:02:01 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/28 15:15:41 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*get_biggest_node(t_list *stack)
{
	t_list	*biggest;

	biggest = stack;
	while (stack)
	{
		if (stack->content > biggest->content)
			biggest = stack;
		stack = stack->next;
	}
	return (biggest);
}
