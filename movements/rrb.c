/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:32:36 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/13 15:32:38 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rrb(t_list **b, int flag)
{
	t_list	*move_node;
	t_list	*temp;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	move_node = *b;
	while (move_node->next->next != NULL)
		move_node = move_node->next;
	temp = move_node->next;
	move_node->next = NULL;
	temp->next = *b;
	*b = temp;
	if (flag == 1)
		ft_putstr_fd("rrb\n", 1);
}