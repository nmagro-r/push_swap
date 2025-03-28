/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_add_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 22:08:02 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/28 15:12:45 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	node_add_front(t_list **stack, t_list *node)
{
	if (!stack || !node)
		return ;
	node->next = *stack;
	*stack = node;
}
